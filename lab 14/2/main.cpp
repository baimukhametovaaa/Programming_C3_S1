#include <iostream>
#include <vector>
template<typename Container>
void Print(const Container &container, const std::string delimiter)
{
    auto last = std::prev(container.end());
    for (auto it = container.begin(); it != container.end(); ++it) {
        std::cout << *it;
        if (it != last)
            std::cout << delimiter;
    }
    std::cout << '\n';
}

int main() {
    std::vector<int> data = {1,3,5,7};
    Print(data, "*-*");
}
