#ifndef __DIAGNOSTICTOOL_H__
#define __DIAGNOSTICTOOL_H__
#include<vector>
#include<iostream>

class DiagnosticTool {
    private:
        static int totalTestsPerformed;

    public:
    static void displayTestResults(const std::vector<std::string>& testResults);
    void performTest(const std::string& testResult);
};

#endif