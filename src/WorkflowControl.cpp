#include "WorkflowControl.h"


WorkflowControl::WorkflowControl(I_IntentRecognizer* recognizer, I_UserIO* ui){
    intentRecognizer = recognizer;
    userInterface = ui;
}

void WorkflowControl::startWorkflow(){
    welcomeMessage();
    serveUser();
    goodbyMessage();
}

void WorkflowControl::welcomeMessage(){
    userInterface->writeOutput("Welcome to my little Intent Recognizer!\n");
}

void WorkflowControl:: serveUser(){
    while(true){
        string question, response;
        question = userInterface->promptUserInput("How may I be of service?\n");
        response = intentRecognizer->identifyIntent(question);
        if(response != "DEFAULT") break;
    }
}

void WorkflowControl::goodbyMessage(){
    userInterface->writeOutput("Goodbye!");
}