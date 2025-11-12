#ifndef __DATALOGGER_H__
#define __DATALOGGER_H__
#include <iostream>
#include <fstream>
#include <string>

class DataLogger {
    private:
        std::string m_logFile;
    
    public:
        
        DataLogger(const std::string& logFile);
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
        void clearLog();
};

#endif