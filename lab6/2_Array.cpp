#include <iostream>
#include <fstream>

int main() {
    const int N = 10;
    int a[N]={ 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };

    std::ofstream out;
    out.open("arrays.txt");
    if (out.is_open())
        for (int n: a) out << n << '\t';
    out << '\n';

    int min = 0; // для записи минимального значения
    int buf = 0; // для обмена значениями
    for (int i = 0; i < N; i++)
    {
        min = i;
        for (int j = i + 1; j < N; j++)
            min = ( a[j] < a[min] ) ? j : min;
        if (i != min)
        {
            buf = a[i];
            a[i] = a[min];
            a[min] = buf;
        }
    }

    for (int i: a)
        out << i << '\t';
    out.close();

    return 0;
}
