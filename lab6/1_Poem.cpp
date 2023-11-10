#include <iostream>
#include <fstream>
int main() {
    std::cout << "Введите стихотворение. Чтобы закончить ввод, введите пустую строку." << std::endl;
    std::string line; // для записи строки

    std::ofstream out; // поток для записи
    out.open("poem.txt"); // открываем файл для записи
    if (out.is_open())
        while (std::getline(std::cin,line) && !line.empty())
            out << line << std::endl;
    else
        std::cout << "Невозможно открыть файл" << std::endl;

    out.close();
    return 0;
}
