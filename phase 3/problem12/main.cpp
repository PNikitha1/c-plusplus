#include "datalogger.h"

int main() {
    DataLogger logger("log.txt");

    logger.logData(43);         
    logger.logData(736.35f);      
    logger.logData("Hi Nikitha"); 

    logger.clearLog();

    return 0;
}