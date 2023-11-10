#include <iostream>
#include "Triangle.h"
int main() {
    try
    {
        std::cout << "Enter the sides of triangle:" << std::endl;
        double a; double b; double c;
        std::cin >> a;
        std::cin >> b;
        std::cin >> c;
        Triangle tr1 = Triangle(a,b,c);
        std::cout << "The square of triangle: " << tr1.CalcSquare() << std::endl;
    }
    catch (Triangle::SideException& ex)
    {
        std::cout << ex.get_message() << std::endl;
    }
    return 0;
}
