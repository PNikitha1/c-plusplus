#include <iostream>
#include <fstream>
#include <string>

class DataLogger {
private:
    std::string m_logFile;

public:
    DataLogger(const std::string& logFile) : m_logFile(logFile) {}

    template <typename T>
    void logData(const T& data) {
        std::ofstream outFile(m_logFile, std::ios::app); 
        if (!outFile.is_open()) {
            std::cerr << "Error: Unable to open log file." << std::endl;
            return;
        }
        outFile << data << std::endl; 
        outFile.close();
        std::cout << "Logged: " << data << std::endl; 
    }

    void clearLog() {
        std::ofstream outFile(m_logFile, std::ios::trunc);
        if (!outFile.is_open()) {
            std::cerr << "Error: Unable to open log file." << std::endl;
            return;
        }
        outFile.close();
        std::cout << "Log file cleared." << std::endl;
    }
};

int main() {
    DataLogger logger("log.txt");

    logger.logData(43);         
    logger.logData(736.35f);      
    logger.logData("Hi Nikitha"); 

    logger.clearLog();

    return 0;
}