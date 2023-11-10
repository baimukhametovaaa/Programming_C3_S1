#include "Triangle_Aggregation.h"
#include <cmath>

// конструктор со значениями
Triangle_Aggregation::Triangle_Aggregation(Dot d1, Dot d2, Dot d3) {
    this->d1 = d1;
    this->d2 = d2;
    this->d3 = d3;

    double a = d1.distanceTo(d2);
    double b = d2.distanceTo(d3);
    double c = d3.distanceTo(d1);
    if ((a>b+c) || (b>a+c) || (c>a+b))
        throw Triangle_Aggregation::SideException("Side of triangle cannot be greater than sum of other sides");
}

// вывод сторон
void Triangle_Aggregation::Sides() {
    std::cout << "a = " << d1.distanceTo(d2) << std::endl;
    std::cout << "b = " << d2.distanceTo(d3) << std::endl;
    std::cout << "c = " << d3.distanceTo(d1) << std::endl;
}

// подсчет периметра
double Triangle_Aggregation::Perimeter() {
    double a = d1.distanceTo(d2);
    double b = d1.distanceTo(d3);
    double c = d2.distanceTo(d3);
    double p = a+b+c;
    return p;
}

// подсчет площади
double Triangle_Aggregation::Square() {
    double a = d1.distanceTo(d2);
    double b = d1.distanceTo(d3);
    double c = d2.distanceTo(d3);
    double p = Perimeter()/2;
    double s = std::sqrt(p*(p-a)*(p-b)*(p-c));
    return s;
}
