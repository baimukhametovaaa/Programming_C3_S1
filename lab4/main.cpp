#include <iostream>
#include <cmath>


int Myroot (double a, double b, double c, double&x1, double&x2)
{
    double d = b*b-4*a*c; // считаем дискриминант
    if (d<0)
    {
        return -1;
    }
    else if (d==0)
    {
        x1 = -b/(2*a);
        x2 = -b/(2*a);
        return 0;
    }
    else
    {
        x1 = (-b + std::sqrt(d))/(2*a);
        x2 = (-b - std::sqrt(d))/(2*a);
        return 1;
    }
}

int main()
{
    system("chcp 65001");
    double a, b, c;
    double x1, x2;

    std::cout << "Введите коэффициенты квадратного уравнения:" << std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    if (Myroot(a, b, c, x1, x2)==-1)
    {
        std::cout << "Корней уравнения нет." << std::endl;
    }
    else if (Myroot(a, b, c, x1, x2)==0)
    {
        std::cout << "Корень уравнения один x1 = x2 = " << x1 << std::endl;
    }
    else
    {
        std::cout << "Корни уравнения x1 = " << x1 << ", x2 = " << x2 << std::endl;
    }
}

