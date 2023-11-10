#include <iostream>
#include <cmath>
struct Time
{
    int hour;
    int minute;
    int second;

    // перевод в секунды
    int To_Seconds() const {
        return hour*3600 + minute*60 + second;
    }
    // вывести время в секундах
    void Show_Seconds() const {
        std::cout << "Количество секунд: " << To_Seconds() << std::endl;
    }
    // вывести время как время
    void Show_Time() const {
        std::cout << hour << " h " << minute << " min " << second << " s" << std::endl;
    }

};
// перевести из секунд в часы и минуты
Time To_Time(int &total_sec) {
    Time t;
    t.hour = total_sec / 3600;
    t.minute = (total_sec % 3600) / 60;
    t.second = total_sec % 60;
    return t;
}
// сложение времени
Time Add_Time(const Time &t1, const Time &t2) {
    int total_sec = t1.To_Seconds() + t2.To_Seconds();
    return To_Time(total_sec);
}
// разность времени
Time Substract_Time(const Time &t1, const Time &t2) {
    int total_t1 = t1.To_Seconds();
    int total_t2 = t2.To_Seconds();
    int diff = total_t1 - total_t2;
    if (diff<0)
        diff+=24*60*60;
    return To_Time(diff);
}

int main() {
    system("chcp 65001");

    std::cout << "Введите время 1 в формате часы, минуты, секунды через пробел: " << std::endl;
    Time t1;
    std::cin >> t1.hour;
    std::cin >> t1.minute;
    std::cin >> t1.second;
    t1.Show_Seconds();

    std::cout << "Введите время 2 в формате часы, минуты, секунды через пробел: " << std::endl;
    Time t2;
    std::cin >> t2.hour;
    std::cin >> t2.minute;
    std::cin >> t2.second;
    t2.Show_Seconds();

    Time t_add = Add_Time(t1, t2);
    Time t_sub = Substract_Time(t1, t2);

    std::cout << "Сложение: ";
    t_add.Show_Time();
    std::cout << "Разность: ";
    t_sub.Show_Time();

    return 0;
}
