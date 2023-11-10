#include <cmath>
#include <string>

class Triangle {
public:

    // класс обработки исключения, когда задается неправильная длина
    class SideException
    {
    public:
        SideException(std::string message): message{message}{}
        std::string get_message() const {return message;}
    private:
        std::string message;
    };

    // конструктор со значениями
    Triangle(double, double, double);

    // метод подсчета площади
    double CalcSquare();

private:
    double a;
    double b;
    double c;
};