#include <iostream>

bool snils_check (std::string snils)
{
    int count = 0; // подсчитаем количество цифр
    int sum = 0; // сумма произведений
    std::string control_number; // чтобы выделить контрольное число из введенной строки
    std::string real_control_number; // правильное контрольное число

    // проходимся по всем символам
    for (auto c:snils)
        if (c == ' ' || c == '-')  // пропускаем пробелы и дефисы
            continue;
        else if (c >= '0' and c <= '9')
        {
            count += 1;
            std::cout << c << " " << (int) (c-'0') << " ";
            if (count <= 9)
                sum += (int) (c-'0') * (10 - count);  // считаем сумму произведений
            else
            {
                std::cout << c << " ";
                control_number += c; // выделяем контрольное число
            }
        }

        else return false;

    // найдем правильное контрольное число
    if (sum < 100)
        real_control_number = std::to_string(sum);
    else if (sum <=101)
        real_control_number = "00";
    else if (sum%101<100)
        real_control_number = std::to_string (sum%101);
    else
        real_control_number = "00";

    std::cout << control_number << ' ' << real_control_number << std::endl;
    // сравним контрольные числа
    if (control_number == real_control_number)
        return true;
    else
        return false;
}


int main()
{
    system("chcp 65001");
    std::cout << "Введите номер СНИЛСа:" << std::endl;
    std::string snils;
    std::getline(std::cin, snils);

    if ( snils_check(snils) )
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;
    return 0;
}
