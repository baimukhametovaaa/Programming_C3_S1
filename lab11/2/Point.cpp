#include "Point.h"

// конструктор со значениями
Point::Point(double x, double y)
{
    this->x = x;
    this->y= y;
}

// подсчет расстояния от центра
double Point::distance() const
{
    return std::sqrt(x*x+y*y);
}

// перегрузка оператора вывода
std::ostream &operator<<(std::ostream &out, const Point &p)
{
    out << "(" << p.x << ";" << p.y << ")";
    return out;
}

// перегрузка оператора сравнения
bool Point::operator<(const Point &p) const
{
    return distance() < p.distance();
}
