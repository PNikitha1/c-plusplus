#include "time.h"
#include <iomanip>
#include <sstream>


MyTime::MyTime() : m_hours(0), m_minutes(0), m_seconds(0) {}


MyTime::MyTime(int hours, int minutes, int seconds) : m_hours(hours), m_minutes(minutes), m_seconds(seconds) {}


MyTime::MyTime(int totalSeconds) {
    m_hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    m_minutes = totalSeconds / 60;
    m_seconds = totalSeconds % 60;
}


MyTime::MyTime(const std::string& timeStr) {
    std::sscanf(timeStr.c_str(), "%d:%d:%d", &m_hours, &m_minutes, &m_seconds);
}

int MyTime::hours() const { 
    return m_hours;
}

int MyTime::minutes() const {
     return m_minutes; 
}

int MyTime::seconds() const { 
    return m_seconds; 
}

std::string MyTime::timestr() const {
    std::ostringstream oss;
    oss << std::setw(2) << std::setfill('0') << m_hours << ":"
        << std::setw(2) << std::setfill('0') << m_minutes << ":"
        << std::setw(2) << std::setfill('0') << m_seconds;
    return oss.str();
}


int MyTime::elapsed() const {
    return m_hours * 3600 + m_minutes * 60 + m_seconds;
}
