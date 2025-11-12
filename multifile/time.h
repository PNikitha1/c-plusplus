#ifndef __TIME_H
#define __TIME_H

#include <string>

class MyTime {
    int m_hours;
    int m_minutes;
    int m_seconds;
public:
    MyTime();
    MyTime(int hours, int minutes, int seconds);
    MyTime(int totalSeconds);
    MyTime(const std::string& timeStr);

    int hours() const;
    int minutes() const;
    int seconds() const;
    std::string timestr() const;
    int elapsed() const;
};

#endif
