#include <iostream>
#include <cmath>

int main()
{
    system("chcp 65001");

    int target_points = 10; // установим количество очков

    int x0 = 1 + std::rand() % 20; // определим координаты центра мишени
    int y0 = 1 + std::rand() % 20;

    int sum_of_points = 0; // сумма очков пользователя

    int count = 0; // количество попыток

    // организуем цикл, имитирующий стрельбу пользователя и подсчет очков

    while (sum_of_points < target_points)
    {
        double x, y;
        std::cout << "Введите координаты:\n";
        std::cin >> x;
        std::cin >> y;

        x = x + (double) (std::rand()) / (double) (std::rand()); // помеха 1
        y = y + (double) (std::rand()) / (double) (std::rand()); // помеха 2

        if ( ( std::pow((x-x0),2) + std::pow((y-y0),2) ) <= 1 )
            sum_of_points+=10;
        else if ( ( std::pow((x-x0),2) + std::pow((y-y0),2) ) <= 4 )
            sum_of_points+=5;
        else if ( ( std::pow((x-x0),2) + std::pow((y-y0),2) ) <= 9 )
            sum_of_points+=1;

        count+=1; // подсчет количества попыток
    }

    std::cout << "Количество попыток: " << count << std::endl;

    // определим уровень пользователя
    if (count > 20)
        std::cout << "Уровень: Новичок" << std::endl;
    else if (count > 10)
        std::cout << "Уровень: Стрелок" << std::endl;
    else
        std::cout << "Уровень: Снайпер" << std::endl;

    return 0;

}
