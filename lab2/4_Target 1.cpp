#include <iostream>
#include <cmath>

int main()
{
    system("chcp 65001");

    int count;
    std::cout << "Введите количество попыток: "; std::cin >> count;

    // определим координаты центра мишени
    int x0 = 1 + std::rand() % 20;
    int y0 = 1 + std::rand() % 20;

    int sum_of_points = 0; // сумма очков пользователя

    // организуем цикл, имитирующий стрельбу пользователя и подсчет очков
    for (int i = 1; i <= count; i++)
    {
        double x, y;
        std::cout << "Попытка № " << i << ". Введите координаты:\n";
        std::cin >> x;
        std::cin >> y;

        x = x + (double) (std::rand()) / (double) (std::rand()); // помеха 1
        y = y + (double) (std::rand()) / (double) (std::rand());

        if ( ( std::pow((x-x0),2) + std::pow((y-y0),2) ) <= 1 )
            sum_of_points+=10;
        else if ( ( std::pow((x-x0),2) + std::pow((y-y0),2) ) <= 4 )
            sum_of_points+=5;
        else if ( ( std::pow((x-x0),2) + std::pow((y-y0),2) ) <= 9 )
            sum_of_points+=1;
    }

    std::cout << "Сумма очков: " << sum_of_points << std::endl;

    // определим уровень пользователя
    int percentage = sum_of_points/(count*10)*100;
    if (percentage >= 80)
        std::cout << "Уровень: Снайпер" << std::endl;
    else if (percentage >= 50)
        std::cout << "Уровень: Стрелок" << std::endl;
    else
        std::cout << "Уровень: Новичок" << std::endl;

    return 0;

}
