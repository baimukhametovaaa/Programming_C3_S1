#include <iostream>
#include <cmath>

double Triangle_Square (double a)
{
    double p = 3*a/2;
    return std::sqrt(p*std::pow(p-a,3));
}

double Triangle_Square (double a, double b, double c)
{
    double p = (a+b+c)/2;
    return std::sqrt(p*(p-a)*(p-b)*(p-c));
}

int main()
{
    system("chcp 65001");
    std::cout << "Введите 1, если треугольник равносторонний, или введите 2, если разносторонний." << std::endl;
    int type;
    std::cin >> type;

    double s;
    if (type == 1)
    {
        double a;
        std::cout << "Введите значение стороны треугольника:\n";
        std::cin >> a;
        s = Triangle_Square (a);
    }
    else
    {
        double a, b, c;
        std::cout << "Введите значения сторон треугольника через пробел:\n";
        std::cin >> a; std::cin >> b; std::cin >> c;
        s = Triangle_Square(a, b, c);
    }

    std::cout.precision(2);
    std::cout << "Площадь треугольника равна " << s << std::endl;

    return 0;
}
