#include <iostream>
#include <string>
#include "Time.h"
// конструктор со значениями
Time::Time(int t_hour, int t_minute, int t_second)
{
    if (t_hour < 0 || t_hour >=24)
        throw TimeException("Invalid argument for hours.");
    if (t_minute < 0 || t_minute >=24)
        throw TimeException("Invalid argument for minutes.");
    if (t_second < 0 || t_second >=24)
        throw TimeException("Invalid argument for seconds.");

    hour = t_hour;
    minute = t_minute;
    second = t_second;
}
// конструктор с нулевыми значениями
Time::Time()
{
    hour = 0;
    minute = 0;
    second = 0;
}

// метод с выводом
std::string Time::get_time() const
{
    return std::to_string(hour)+":"+std::to_string(minute)+":"+std::to_string(second);
}

// метод со сложением
void Time::add_time (const Time& t1, const Time& t2)
{

    second = (t1.second+t2.second) % 60;
    minute = (t1.minute + t2.minute + (t1.second + t2.second) / 60) % 60;
    hour = (t1.hour + t2.hour + (t1.minute + t2.minute + (t1.second + t2.second) / 60) / 60) % 24;
}

