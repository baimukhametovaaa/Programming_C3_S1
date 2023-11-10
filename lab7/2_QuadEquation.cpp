#include <iostream>
#include <math.h>

struct Roots {
    double x1;
    double x2;

    void show_roots(){
        if (std::isnan(x1) && std::isnan(x2) )
            std::cout << "Действительных корней нет" << std::endl;
        else
        {
            std::cout << "x1 = " << x1 << std::endl;
            std::cout << "x2 = " << x2 << std::endl;
        }
    }
};

Roots Equation (double &a, double &b, double &c) {
    Roots roots;
    double d = b*b - 4*a*c;
    if (d<0)
        roots.x1 = roots.x2 = std::nan(" ");
    else if (d==0)
        roots.x1 = roots.x2 = -b/(2*a);
    else
    {
        roots.x1 = (-b+std::sqrt(d))/(2*a);
        roots.x2 = (-b-std::sqrt(d))/(2*a);
    }
    return roots;
}
int main() {
    system("chcp 65001");
    std::cout << "Введите коэффициенты квадратного уравнения через пробел:" << std::endl;
    double a; double b; double c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    Roots solution = Equation(a, b, c);
    solution.show_roots();
    return 0;
}
