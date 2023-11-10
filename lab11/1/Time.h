#include <string>

class Time {
public:

    // исключение - ввод неправильного времени
    void time_validation();

    // конструктор со значениями
    Time(int, int, int);

    // конструктор с нулевыми значениями
    Time();

    // конструктор для преобразования вещ в часы
    Time(float);

    // метод с выводом
    std::string get_time() const;

    // перевод в секунды
    int to_seconds() const;

    // перевод во время
    Time to_time(int) const;

    // метод со сложением
    void add_time (const Time&, const Time&);

    // перегрузка сложения
    Time operator+ (const Time&);

    // перегрузка вычитания
    Time operator-(const Time&);

    // сложение время + вещ
    Time operator+(double);

    // сложение вещ + время
    friend Time operator+(double seconds_to_add, const Time& t);

    // сравнение
    bool operator==(const Time&) const;

    bool operator!=(const Time&) const;

    bool operator>(const Time&) const;

    bool operator<(const Time&) const;

    bool operator>=(const Time&) const;

    bool operator<=(const Time&) const;

    // преобразование к корректному виду

private:
    int hour;
    int minute;
    int second;

    // константы для перевода
    const int hr = 24;
    const int min = 60;
    const int sec = 60;

};

