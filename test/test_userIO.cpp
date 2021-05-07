#include "gtest/gtest.h"
#include "UserIO.h"
#include <iostream>
using namespace std;


class ioTest : public ::testing::Test {
 protected:
    streambuf *coutBackup, *cinBackup;
    stringstream   testOutBuffer,  testInBuffer;

    virtual void SetUp() {
        coutBackup  = cout.rdbuf( testOutBuffer.rdbuf() );
        cinBackup  = cin.rdbuf( testInBuffer.rdbuf() );
    }
    virtual void TearDown() {  
        cout.rdbuf(coutBackup);
        cin.rdbuf(cinBackup);
    }
};



TEST_F(ioTest, outputMessage){
    // Test case for message output
    string testMessage = "Konsequenz heißt auch Holzwege zu Ende zu gehen.";
    UserIO cli;
    cli.writeOutput(testMessage);
    EXPECT_EQ (testMessage,testOutBuffer.str());    
}
