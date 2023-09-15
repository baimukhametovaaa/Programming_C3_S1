#include <iostream>
#include <cmath>

double cube_root_1 (int n)
{
    return std::pow (n, 1.0/3);
}

double cube_root_2 (int n)
{
    double x, x1;
    x = n;
    while (std::abs(x-x1)>0.0000001)
    {
        x1=x;
        x = (n/(x1*x1)+2*x1)/3;
    }

    return x;
}


int main()
{
    system("chcp 65001");
    std::cout << "Введите число:" << std::endl;
    int n;
    std::cin >> n;
    std:: cout << "Кубический корень по первой формуле равен " << cube_root_1(n) << std::endl;
    std:: cout << "Кубический корень по второй формуле равен " << cube_root_2(n) << std::endl;

    return 0;
}
