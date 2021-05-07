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
        string promptUserInput(string promptMessage);
        void writeOutput(string messageOutput);
};

#endif // INTENT_RECOGNITION_INCLUDE_INTERFACE_USER_IO_H