#include "gtest/gtest.h"
#include "IntentRecognizer.h"
#include <string>
#include <map>
#include <iostream>
using namespace std;

class IntentTest : public ::testing::Test {
 protected:
  virtual void SetUp() {
    
  }
  virtual void TearDown() {
  }
};


TEST_F(IntentTest,identifyIntent){
    // Test case to recognize a simple intent
    map<string, string> intentMapping = {{"What is the weather like today?","Get Weather"}};
    IntentRecognizer recognizer;
    
    for (auto it = intentMapping.begin(); it != intentMapping.end(); ++it) {
        cout << it->first << ", " << it->second << '\n';
        EXPECT_EQ (recognizer.identifyIntent(it->first),  it->second);
    }
    
}