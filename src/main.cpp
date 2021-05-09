#include <iostream>
#include "UserIO.h"
#include "IntentRecognizer.h"
#include "WorkflowControl.h"

int main(int, char**) {
    IntentRecognizer recognizer;
    UserIO userInterface;
    WorkflowControl controller(&recognizer, &userInterface);
    
    controller.startWorkflow();
}
