#include <iostream>

// определить среднее значение
template<class T>
double find_avg(T arr[], int size)
{
    double sum = 0;
    for (int i=0;i<size;i++)
        sum+=arr[i];
    return sum/size;
}



int main() {
    system("chcp 65001");
    int intArray[] = {1, 2, 3, 4, 5};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    std::cout << "Среднее арифметическое для массива типа int: " << find_avg(intArray, intSize) << std::endl;

    long longArray[] = {10, 20, 30, 40, 50};
    int longSize = sizeof(longArray) / sizeof(longArray[0]);
    std::cout << "Среднее арифметическое для массива типа long: " << find_avg(longArray, longSize) << std::endl;

    double doubleArray[] = {1.5, 2.5, 3.5, 4.5, 5.5};
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);
    std::cout << "Среднее арифметическое для массива типа double: " << find_avg(doubleArray, doubleSize) << std::endl;

    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    int charSize = sizeof(charArray) / sizeof(charArray[0]);
    std::cout << "Среднее арифметическое для массива типа char: " << static_cast<int>(find_avg(charArray, charSize)) << std::endl;
}
