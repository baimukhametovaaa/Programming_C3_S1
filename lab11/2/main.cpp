#include <iostream>
#include "Point.h"

int main() {
    std::vector<Point> v;
    v.push_back(Point(1,2));
    v.push_back(Point(10,12));
    v.push_back(Point(21,7));
    v.push_back(Point(4,8));
    std::sort(v.begin(), v.end());
    for (auto &point : v)
        std::cout << point << '\n';
    return 0;
}

