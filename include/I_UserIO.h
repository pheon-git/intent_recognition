/*
    I_UserIO.h
    Interface for User Input and Output
*/


#ifndef INTENT_RECOGNITION_INCLUDE_INTERFACE_USER_IO_H
#define INTENT_RECOGNITION_INCLUDE_INTERFACE_USER_IO_H

#include <string>
using namespace std;

class I_UserIO{
    public:
        virtual string promptUserInput(string promptMessage) = 0;
        virtual void writeOutput(string messageOutput) = 0;
};

#endif // INTENT_RECOGNITION_INCLUDE_INTERFACE_USER_IO_H