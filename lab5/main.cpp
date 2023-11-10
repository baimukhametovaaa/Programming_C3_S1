#include <iostream>

int* max_vect(int kc,  const int a[], const int b[])
{
    int* res = new int[kc]; // создание динамического массива

    for (int i = 0;i < kc; i++) // заполнение массива
    {
        if (a[i] >= b[i])
        {
            res[i] = a[i];
        }
        else
        {
            res[i] = b[i];
        }
    }
    return res;
}

int main()
{
    int a[]={1,2,3,4,5,6,7,2};
    int b[]={7,6,5,4,3,2,1,3};
    int kc = sizeof(a)/sizeof(a[0]); //Количество элементов массива
    int* c = max_vect(kc,a,b); //вызов функции для создания массива
    for (int i = 0;i < kc; i++) //Вывод результата.
        std::cout << c[i] << " ";
    std::cout << std::endl;
    delete []c;
}
