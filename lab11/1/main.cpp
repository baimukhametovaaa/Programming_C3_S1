#include <iostream>
#include "Time.h"

int main() {
    system("chcp 65001");
    std::cout << "Введите через пробел часы, минуты, секунды для t1:" << std::endl;
    int h; int m; int s;
    std::cin >> h; std::cin >> m; std::cin >> s;
    Time t1(h,m,s);

    std::cout << "Введите вещественное число для t2:" << std::endl;
    double t2;
    std::cin >> t2;

    Time res1 = t1+t2;
    std::cout << "t1 + t2 = " << res1.get_time()<< std::endl;

    Time res2 = t2+t1;
    std::cout << "t2 + t1 = " << res2.get_time()<< std::endl;

    std::cout << "Введите через пробел часы, минуты, секунды для t3:" << std::endl;
    std::cin >> h; std::cin >> m; std::cin >> s;
    Time t3(h,m,s);

    if (t1 > t3)
        std::cout << "t1 больше t3";
    else if (t1==t3)
        std::cout << "t1 равно t3";
    else
        std::cout << "t1 меньше t3";
    return 0;

}
