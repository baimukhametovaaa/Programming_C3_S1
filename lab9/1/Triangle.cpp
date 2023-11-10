#include "Triangle.h"

Triangle::Triangle(double side1, double side2, double side3)
{
    if (side1 >= (side2+side3) || side2 >= (side1+side3) || side3 >= (side1+side2))
        throw Triangle::SideException("Invalid values for sides.");
    a = side1;
    b = side2;
    c = side3;
}

double Triangle::CalcSquare() {
    double p = (a+b+c)/2;
    double s = std::sqrt(p*(p-a)*(p-b)*(p-c));
    return s;
}