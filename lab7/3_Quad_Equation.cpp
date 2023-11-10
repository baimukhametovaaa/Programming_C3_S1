#include <iostream>
#include <cmath>

using Tuple = std::tuple<double, double, std::string>;

Tuple Equation (double &a, double &b, double &c) {
    double d = b*b - 4*a*c;
    double x1;
    double x2;
    std::string flag;
    if (d<0)
    {
        x1 = x2 = std::nan(" ");
        flag = "-n";
    }
    else if (d==0)
    {
        x1 = x2 = -b/(2*a);
        flag = "-q";
    }
    else
    {
        x1 = (-b+std::sqrt(d))/(2*a);
        x2 = (-b-std::sqrt(d))/(2*a);
        flag = "-d";
    }
    return std::make_tuple(x1, x2, flag);
}
int main() {
    system("chcp 65001");
    std::cout << "Введите коэффициенты квадратного уравнения через пробел:" << std::endl;
    double a; double b; double c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    Tuple solution = Equation(a, b, c);
    if (std::get<2>(solution)=="-n")
        std::cout << "Нет действительных корней" << std::endl;
    else if (std::get<2>(solution)=="-q")
        std::cout << "x1 = x2 = " << std::get<0>(solution) << std::endl;
    else
    {
        std::cout << "x1 = " << std::get<0>(solution) << std::endl;
        std::cout << "x2 = " << std::get<1>(solution) << std::endl;
    }
    
    return 0;
}
