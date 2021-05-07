/*
    WorflowControl.h
    Class for controlling the workflow of the application.
*/

#ifndef INTENT_RECOGNITION_INCLUDE_WORKFLOW_CONTROL_H
#define INTENT_RECOGNITION_INCLUDE_WORKFLOW_CONTROL_H

#include "I_UserIO.h"
#include "I_IntentRecognizer.h"

class WorkflowControl{
    public:
        WorkflowControl(I_IntentRecognizer* recognizer, I_UserIO* ui);
        void startWorkflow();
    private:
        I_IntentRecognizer* intentRecognizer;
        I_UserIO* userInterface;
        void welcomeMessage();
        void serveUser();
        void goodbyMessage();
};

#endif // INTENT_RECOGNITION_INCLUDE_WORKFLOW_CONTROL_H
