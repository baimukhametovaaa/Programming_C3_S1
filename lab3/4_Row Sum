#include <iostream>
#include <cmath>

int row_sum (int n)
{
    if (n == 0) return 0;
    return 5*n + row_sum (n-1);
}
int main ()
{
    system("chcp 65001");
    std::cout << "Введите значение n: " << std::endl;
    int n;
    std::cin >> n;
    std::cout << "Сумма ряда до " << n << "-го члена равна: " << row_sum(n) << std::endl;

    return 0;
}
