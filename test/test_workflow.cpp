#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "I_IntentRecognizer.h"
#include "I_UserIO.h"
#include "WorkflowControl.h"
#include <iostream>
#include <string>
using namespace std;


class workflowTest : public ::testing::Test {
 protected:
    virtual void SetUp() {
    }
    virtual void TearDown() {  
    }
};


class mockRecognizer : public I_IntentRecognizer{
    public:
        MOCK_METHOD1(identifyIntent, string(string userInput));
};

class mockHMI : public I_UserIO {
    public:
        MOCK_METHOD1(promptUserInput, string(string promptMessage));
        MOCK_METHOD1(writeOutput, void(string messageOutput));
};

TEST_F(workflowTest, callIntentRecognizer){
    // Test case to check if the workflow correctly calls the Intent Recognizer module
    string testInput = "Test Input";
    // Create Mock Objects
    mockRecognizer recognizer;
    mockHMI hmi;

    WorkflowControl controller(&recognizer, &hmi);
    EXPECT_CALL(recognizer, identifyIntent(testing::_))
        .Times(testing::AtLeast(1))
        .WillOnce(testing::Return("Test Intent"));
    
    
    controller.startWorkflow();

}

TEST_F(workflowTest, callHMI){
    // Test case to check if the HMI module is called properly
    string testInput = "Test Input";
    mockRecognizer recognizer;
    mockHMI hmi;

    WorkflowControl controller(&recognizer, &hmi);
    EXPECT_CALL(hmi, promptUserInput(testing::_))
        .Times(testing::AtLeast(1))
        .WillOnce(testing::Return("Test Intent"));
    EXPECT_CALL(hmi, writeOutput(testing::_))
        .Times(2);
        
    controller.startWorkflow();
}

