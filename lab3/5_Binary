#include <iostream>

int binary_code (int n)
{
    if (n == 0)
        return 0;
    else
        return (n%2 + 10 * binary_code(n/2));
}




int main()
{
    system("chcp 65001");
    std::cout << "Введите число n:" << std::endl;
    int n;
    std::cin >> n;
    std::cout << "В двоичной форме: " << binary_code(n) << std::endl;
    return 0;
}
