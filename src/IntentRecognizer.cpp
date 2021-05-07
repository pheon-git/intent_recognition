#include "IntentRecognizer.h"
#include <map>

string IntentRecognizer::identifyIntent(string userInput){
    map<string, string> intentMapping = {
                {"What is the weather like today?","Get Weather"},
                {"What is the weather like in Paris today?","Get Weather City"},
                {"Tell me an interesting fact.","Get Fact"}
    };
    return(intentMapping[userInput]);
}