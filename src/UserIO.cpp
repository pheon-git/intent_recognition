#include "UserIO.h"
#include <iostream>
using namespace std;

void UserIO::writeOutput(string messageOutput){
    cout << messageOutput << endl;
}

string UserIO::promptUserInput(string promptMessage){
    string returnString;

    cout << promptMessage << endl;    
    getline(cin, returnString);
    
    return(returnString);
}