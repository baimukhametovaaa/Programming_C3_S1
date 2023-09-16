#include <iostream>

bool input(int&a,int&b)
{
    std::string n1, n2;
    std::cout << "Введите два целых положительных числа через пробел:" << std::endl;
    std::cin >> n1;
    std::cin >> n2;

    for (char i : n1)
    {
        if (isdigit(i))
            continue;
        else
            return false;
    }

    for (char k: n2)
    {
        if (isdigit(k))
            continue;
        else
            return false;
    }

    a = std::stoi(n1);
    b = std::stoi(n2);
    return true;
}

int main() {
    system("chcp 65001");
    int a, b;
    if(input(a,b)== false) // if(!Input(a,b))
    {
        std::cerr << "error";
        return 1;
    }
    else
    {
        int s = a + b;
        std::cout << "a + b = " << s << std::endl;
    }
    return 0;
}
