/*
    I_IntentRecognition.h
    Interface for Intent Recognition.
*/


#ifndef INTENT_RECOGNITION_INCLUDE_INTERFACE_INTENT_RECOGNITON_H
#define INTENT_RECOGNITION_INCLUDE_INTERFACE_INTENT_RECOGNITON_H

#include <string>
using namespace std;

class I_IntentRecognizer{
    public:
    virtual string identifyIntent(string userInput)=0;
};

#endif // INTENT_RECOGNITION_INCLUDE_INTERFACE_INTENT_RECOGNITON_H