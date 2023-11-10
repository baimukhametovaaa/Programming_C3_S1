#include <string>

class Time {
public:
    // исключение - ввод неправильного времени
    void time_validation();

    // конструктор со значениями
    Time(int, int, int);

    // конструктор с нулевыми значениями
    Time();

    // метод с выводом
    std::string get_time() const;

    // метод со сложением
    void add_time (const Time&, const Time&);

private:
    int hour;
    int minute;
    int second;

    // константы для задания времени
    const int sec;
    const int min;
    const int h;

};



