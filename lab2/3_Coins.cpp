#include <iostream>

// есть монеты : 10 рублей, 5 рублей, 2 рубля, 1 рубль, 50 коп, 10 коп, 5 коп, 1 коп
int main()
{
    system("chcp 65001");
    std::cout << "Введите сумму в формате X рублей Y копеек:\n";
    int rub, cop;
    std::cin >> rub;
    std::cin >> cop;

    rub = rub + cop/100;
    cop = cop % 100;


    int rubles[4] = {10, 5, 2, 1};
    int cops[4] = {50, 10, 5, 1};

    int count_r[4] = {0,0,0,0};
    int count_c[4] = {0,0,0,0};

    //int sum_r, sum_c = 0;
    std::cout << "Размен: \n";

    for (int i = 0; i<4; i++)
    {
        count_r[i] = rub / rubles[i]; // колво монеток
        rub = rub % rubles[i];
        if (count_r[i]!=0)
            std::cout << count_r[i] << " по " << rubles[i] << " руб.\n";
    }

    for (int j = 0; j<4; j++)
    {
        count_c[j] =  cop/cops[j]; // колво монеток
        cop = cop % cops[j];
        if (count_c[j]!=0)
            std::cout << count_c[j] << " по " << cops[j] << " коп.\n";
    }
    return 0;


}
