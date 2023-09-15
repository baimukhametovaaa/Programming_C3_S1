﻿// Pent Square.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath> 
#include <iomanip> 

int main()
{
    system("chcp 1251"); // русский язык

    // ввод вершин
    double x1, y1;
    std::cout << "Введите координаты первой вершины:\n";
    std::cin >> x1;
    std::cin >> y1;

    double x2, y2;
    std::cout << "Введите координаты второй вершины:\n";
    std::cin >> x2;
    std::cin >> y2;

    double x3, y3;
    std::cout << "Введите координаты третьей вершины:\n";
    std::cin >> x3;
    std::cin >> y3;

    double x4, y4;
    std::cout << "Введите координаты четвертой вершины:\n";
    std::cin >> x4;
    std::cin >> y4;

    double x5, y5;
    std::cout << "Введите координаты пятой вершины:\n";
    std::cin >> x5;
    std::cin >> y5;

    // подсчет площади по формуле
    double s = std::abs(x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5*y1 - x2 * y1 - x3 * y2 - x4 * y3 - x5 * y4 - x1 * y5) / 2;

    std::cout.precision(2); // сколько знаков после запятой
    std::cout << "\n Площадь пятиугольника равна " << s << std::endl; // вывод

    return 0;



}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
