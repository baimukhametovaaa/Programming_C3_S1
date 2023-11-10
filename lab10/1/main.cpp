#include <iostream>
#include "Triangle_Aggregation.h"
#include "Triangle_Composition.h"

int main() {
    Triangle_Composition t1(0, 0, 0, 3, 4, 0);
    t1.Sides();
    std::cout << "Perimeter: " << t1.Perimeter() << std::endl;
    std::cout << "Square: " << t1.Square() << std::endl;

    Triangle_Aggregation t2(Dot{0, 0}, Dot{0, 3}, Dot{4, 0});
    t2.Sides();
    std::cout << "Perimeter: " << t2.Perimeter() << std::endl;
    std::cout << "Square: " << t2.Square() << std::endl;
    return 0;
}
