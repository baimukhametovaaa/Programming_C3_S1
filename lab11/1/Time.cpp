#include <iostream>
#include <string>
#include "Time.h"

// приведение в нормальную форму
void Time::time_validation()
{
    int extra_min = second/sec;
    minute+=extra_min;
    second%=sec;

    int extra_hour = minute/min;
    hour+=extra_hour;
    minute%=min;

    hour%=hr;
}

// конструктор со значениями
Time::Time(int t_hour, int t_minute, int t_second): hour(t_hour), minute(t_minute), second(t_second)
{time_validation();}

// конструктор с нулевыми значениями
Time::Time(): hour(0), minute(0), second(0) {}

// метод с выводом
std::string Time::get_time() const
{
    return std::to_string(hour)+":"+std::to_string(minute)+":"+std::to_string(second);
}

// перевод в секунды
int Time::to_seconds() const
{
    return hour*hr+minute*min+second*sec;
}

// перевод в часы
Time Time::to_time(int total_sec) const
{
    total_sec = total_sec % (hr*min*sec);
    int s = total_sec % sec;
    total_sec /= sec;

    int m = total_sec % min;
    total_sec /= min;

    int h = total_sec;
    return Time(h,m,s);
};

// метод со сложением
void Time::add_time (const Time& t1, const Time& t2)
{

    second = (t1.second+t2.second) % 60;
    minute = (t1.minute + t2.minute + (t1.second + t2.second) / 60) % 60;
    hour = (t1.hour + t2.hour + (t1.minute + t2.minute + (t1.second + t2.second) / 60) / 60 ) % 24;
}

// перегрузка оператора сложения
Time Time::operator+(const Time &t2)
{
    int total_sec = to_seconds()+t2.to_seconds();
    return to_time(total_sec);
}

// перегрузка оператора вычитания
Time Time::operator-(const Time &t2)
{
    int total_sec = to_seconds()-t2.to_seconds();
    if (total_sec<0)
        total_sec+=sec*min*hr;
    return to_time(total_sec);
}

// перегрузка оператора сравнения
bool Time::operator==(const Time &t2) const
{
    return to_seconds()==t2.to_seconds();
}

bool Time::operator!=(const Time &t2) const
{
    return to_seconds()!=t2.to_seconds();
}

bool Time::operator<(const Time &t2) const
{
    return to_seconds()<t2.to_seconds();
}

bool Time::operator>(const Time &t2) const
{
    return to_seconds()>t2.to_seconds();
}

bool Time::operator<=(const Time &t2) const
{
    return to_seconds()<=t2.to_seconds();
}

bool Time::operator>=(const Time &t2) const
{
    return to_seconds()>=t2.to_seconds();
}

// сложение время+вещ
Time Time::operator+(double hours_to_add)
{
    int hours = static_cast<int>(hours_to_add);
    int mins = static_cast<int>((hours_to_add-hours)*min);
    return Time(hour+hours, minute+mins, second);
}

// сложение вещ+время
Time operator+(double hours_to_add, const Time &t)
{
    int hours = static_cast<int>(hours_to_add);
    int mins = static_cast<int>((hours_to_add-hours)*t.min);
    return Time(t.hour+hours, t.minute+mins, t.second);
}





