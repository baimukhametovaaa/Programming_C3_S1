#include <iostream>
#include <cmath>

int main()
{
    //system("chcp 65001");
    std::cout << "Enter the number:\n";
    int number;
    std::cin >> number;
    // проверим является ли число просто простым
    int del = 0;
    for (int i=2; i<=std::sqrt(number); i++)
        if (number % i == 0)
            del+=1;

    if (del!=0) // если число составное, то мы говорим, что оно не суперпростое
        std::cout << "This number is not super-prime.\n";
    else
    {
        // если число простое, то найдем его позицию в ряде простых чисел
        int count = 1;
        // количество простых чисел до
        for (int k=2; k<number; k++)
        {
            // проверяем числа до на простое
            int del_number = 0;
            for (int j=2; j<=std::sqrt(k); j++)
                if (k % j == 0)
                    del_number+=1;
            if (del_number==0)
                count+=1;
        }

        std::cout << count << std::endl; // вывод позиции числа

        // проверяем позицию числа на простость

        if (count > 1)
        {
            bool prime = true;
            for (int i=2; i<=std::sqrt(count); i++)
                if (count % i == 0)
                {
                    prime = false;
                    std::cout << "This number is not super-prime.\n";
                }
            if (prime)
                std::cout << "This number is super-prime.\n";
        }
        else
            std::cout << "This number is not super-prime.\n";
    }

    return 0;

}



