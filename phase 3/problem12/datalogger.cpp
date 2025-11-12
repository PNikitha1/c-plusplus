#include "datalogger.h"

DataLogger::DataLogger(const std::string& logFile) : m_logFile(logFile) {}


void DataLogger::clearLog() {
    std::ofstream outFile(m_logFile, std::ios::trunc);
    if (!outFile.is_open()) {
        std::cerr << "Error: Unable to open log file." << std::endl;
        return;
    }
    outFile.close();
    std::cout << "Log file cleared." << std::endl;
}