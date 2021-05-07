#include "gtest/gtest.h"
#include "IntentRecognizer.h"
#include <string>
#include <map>
#include <iostream>
using namespace std;

class IntentTest : public ::testing::Test {
 protected:
    map<string, string> intentMapping;
    virtual void SetUp() {
        intentMapping = {
                {"What is the weather like today?","Get Weather"},
                {"What is the weather like in Paris today?","Get Weather City"},
                {"Tell me an interesting fact.","Get Fact"}
            };
    }
    virtual void TearDown() {
    }
};


TEST_F(IntentTest,identifyIntent){
    // Test case to recognize a simple intent
    
    IntentRecognizer recognizer;
    
    for (auto it = intentMapping.begin(); it != intentMapping.end(); ++it) {
        EXPECT_EQ (recognizer.identifyIntent(it->first),  it->second);
    }
    
}