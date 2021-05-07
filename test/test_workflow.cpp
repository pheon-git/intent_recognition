#include "gtest/gtest.h"

#include <iostream>
using namespace std;


class workflowTest : public ::testing::Test {
 protected:
    virtual void SetUp() {
    }
    virtual void TearDown() {  
    }
};



TEST_F(workflowTest, blankTC){
    // Test case still blank
}