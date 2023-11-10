#include <iostream>
#include <vector>
#include <cstring>
#include <sstream>


// проверка на целое число
bool is_int(const std::string &str) {
    for (char c: str)
        if (!std::isdigit(c) && c != '-' && c != '+') return false;

    return true;
}

int calculate(std::vector<std::string>& argv) {
    // проверка на то, что всего 4 аргумента
    if (argv.size()!=4)
    {
        std::cout << "Please enter 4 arguments" << std::endl; // если меньше 4 аргументов;
        return 0;
    }
    // проверка на целое число
    if (!is_int(argv[2]) || !is_int(argv[3]) )
    {
        std::cout << "Please enter integer values" << std::endl;
        return 0;
    }
    // проверка флагов
    if (argv[1]=="-a") // сложение если флаг равен -а
        {
            int a = std::stoi(argv[2]);
            int b = std::stoi(argv[3]);
            return a+b;
        }
    else if (argv[1]=="-m") // умножение если флаг равен -m
        {
            int a = std::stoi(argv[2]);
            int b = std::stoi(argv[3]);
            return a*b;
        }
    else
        std::cout<< "Enter '-m' for multiplication or '-a' for addition" << std::endl;
            return 0;
}

int main() {
    std::cout << "Enter:" << std::endl;
    std::string params;
    std::getline(std::cin, params);
    std::vector<std::string> argv; // вектор, где будут храниться введенные параметры

    std::istringstream iss(params);
    std::string token;

    while (iss >> token) {
        argv.push_back(token);
    }
    int result = calculate(argv);
    std::cout << result;

}
