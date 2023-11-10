#include <iostream>
#include "Time.h"

int main() {
    const Time t1(10, 27, 90);
    const Time t2(8, 67, 10);
    Time t3;
    t3.add_time(t1, t2);
    std::cout << t3.get_time() << std::endl;
    // 19:35:40
    return 0;
}
