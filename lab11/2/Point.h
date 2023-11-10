#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

class Point {
public:
    // конструктор со значениями
    Point(double, double);

    // подсчет расстояния от центра
    double distance() const;

    // перезагрузка вывода
    friend std::ostream& operator<<(std::ostream& out, const Point&);

    // перезагрузка сравнения
    bool operator<(const Point&) const;


private:
    double x;
    double y;
};

