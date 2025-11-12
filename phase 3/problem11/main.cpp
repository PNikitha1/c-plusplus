#include "diagnostictool.h"

int main() {
    DiagnosticTool tool;

    tool.performTest("Test 1: Engine check - Passed");
    tool.performTest("Test 2: Brake system - Warning");
    tool.performTest("Test 3: Battery check - Passed");

    std::vector<std::string> testResults = {
        "Engine check - Passed",
        "Brake system - Warning",
        "Battery check - Passed"
    };

    DiagnosticTool::displayTestResults(testResults);
    

    return 0;
}