/*
    IntentRecognition.h
    Control class to recognize intents.
*/

#ifndef INTENT_RECOGNITION_INCLUDE_INTENT_RECOGNITON_H
#define INTENT_RECOGNITION_INCLUDE_INTENT_RECOGNITON_H

#include "I_IntentRecognizer.h"
#include <string>
using namespace std;

class IntentRecognizer : public I_IntentRecognizer{
    public:
        string identifyIntent(string userInput);
};

#endif // INTENT_RECOGNITION_INCLUDE_INTENT_RECOGNITON_H