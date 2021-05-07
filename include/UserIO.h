/*
    UserIO.h
    Class for User Input and Output
*/



#ifndef INTENT_RECOGNITION_INCLUDE_USER_IO_H
#define INTENT_RECOGNITION_INCLUDE_USER_IO_H

#include "I_UserIO.h"
#include <string>
using namespace std;

class UserIO : public I_UserIO{
    public:
        string promptUserInput(string promptMessage);
        void writeOutput(string messageOutput);
};


#endif // INTENT_RECOGNITION_INCLUDE_USER_IO_H