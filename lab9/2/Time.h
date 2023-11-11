#include <string>

class Time {
public:
    // исключение - ввод неправильного времени
    class TimeException
    {
    public:
        TimeException(std::string message): message{message}{}
        std::string get_message() const {return message;}
    private:
        std::string message;
    };

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
};



