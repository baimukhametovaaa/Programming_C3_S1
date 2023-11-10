#include "Triangle_Composition.h"

Triangle_Composition::Triangle_Composition(double x1, double y1, double x2, double y2, double x3, double y3)
{
    d1 = Dot(x1, y1);
    d2 = Dot(x2, y2);
    d3 = Dot(x3, y3);

    double a = d1.distanceTo(d2);
    double b = d2.distanceTo(d3);
    double c = d3.distanceTo(d1);
    if ((a>b+c) || (b>a+c) || (c>a+b))
        throw Triangle_Composition::SideException("Side of triangle cannot be greater than sum of other sides");

}

// вывод сторон
void Triangle_Composition::Sides() {
    std::cout << "a = " << d1.distanceTo(d2) << std::endl;
    std::cout << "b = " << d2.distanceTo(d3) << std::endl;
    std::cout << "c = " << d3.distanceTo(d1) << std::endl;
}

// подсчет периметра
double Triangle_Composition::Perimeter() {
    double a = d1.distanceTo(d2);
    double b = d1.distanceTo(d3);
    double c = d2.distanceTo(d3);
    double p = a+b+c;
    return p;
}

// подсчет площади
double Triangle_Composition::Square() {
    double a = d1.distanceTo(d2);
    double b = d1.distanceTo(d3);
    double c = d2.distanceTo(d3);
    double p = Perimeter()/2;
    double s = std::sqrt(p*(p-a)*(p-b)*(p-c));
    return s;
}
