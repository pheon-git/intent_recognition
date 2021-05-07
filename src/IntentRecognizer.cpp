#include "IntentRecognizer.h"
#include "I_IntentRecognizer.h"
#include <map>



string IntentRecognizer::identifyIntent(string userInput){
    map<string, string> intentMapping = {
                {"What is the weather like today?","Get Weather"},
                {"What is the weather like in Paris today?","Get Weather City"},
                {"Tell me an interesting fact.","Get Fact"}
    };

    auto result = intentMapping.find(userInput);
    if (result != intentMapping.end()) {
        return(result->second);
    } else {
        return("DEFAULT");
    }
}