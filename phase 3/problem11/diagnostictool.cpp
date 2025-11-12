#include "diagnostictool.h"


int DiagnosticTool::totalTestsPerformed = 0;


void DiagnosticTool::displayTestResults(const std::vector<std::string>& testResults) {
    std::cout << "Diagnostic Test Results:" << std::endl;
    for (const auto& result : testResults) {
        std::cout << "- " << result << std::endl;
    }
    std::cout << "Total Tests Performed: " << totalTestsPerformed << std::endl;
}


void DiagnosticTool::performTest(const std::string& testResult) {
    std::cout << "Performing diagnostic test..." << std::endl;
    totalTestsPerformed++;
    std::cout << "Test Completed: " << testResult << std::endl;
}