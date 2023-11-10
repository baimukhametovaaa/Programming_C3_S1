#include <iostream>
#include "Time.h"
int main() {
    try
    {
        std::cout << "Enter values for time1:" << std::endl;
        int h1; int m1; int s1;
        std::cin >> h1; std::cin >> m1; std::cin >> s1;
        Time t1(h1, m1, s1);

        std::cout << "Enter values for time2:" << std::endl;
        int h2; int m2; int s2;
        std::cin >> h2; std::cin >> m2; std::cin >> s2;
        Time t2(h2, m2, s2);

        std::cout << "Time 1: " << t1.get_time() << std::endl;
        std::cout << "Time 2: " << t2.get_time() << std::endl;

        Time t3;
        t3.add_time(t1, t2);

        std::cout << "Sum of times: " << t3.get_time() << std::endl;
    }

    catch (Time::TimeException& ex)
    {
        std::cout << ex.get_message() << std::endl;
    }

    return 0;
}
