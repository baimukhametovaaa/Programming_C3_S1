#include <iostream>
#include <string>
#include "Time.h"

// конструктор со значениями
Time::Time(int t_hour, int t_minute, int t_second): \
hour(t_hour), minute(t_minute), second(t_second), h(24), min(60), sec(60) \
{time_validation();}

// конструктор с нулевыми значениями
Time::Time(): hour(0), minute(0), second(0), h(24), min(60), sec(60) {}

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
    hour = (t1.hour + t2.hour + (t1.minute + t2.minute + (t1.second + t2.second) / 60) / 60 ) % 24;
}

void


