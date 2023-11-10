#include <iostream>
#include "Dot.h"

// агрегация
class Triangle_Aggregation {
private:
    Dot d1;
    Dot d2;
    Dot d3;

public:
    // обработка исключений, если стороны не удовлетворяют требованию
    class SideException
    {
    public:
        SideException(std::string message): message{message}{}
        std::string get_message() const {return message;}
    private:
        std::string message;
    };
    // конструктор со значениями
    Triangle_Aggregation(Dot, Dot, Dot);

    // метод, чтобы вычислить длины сторон
    void Sides();

    // метод, чтобы вычислить периметр
    double Perimeter();
    // метод, чтобы вычислить площадь
    double Square();
};


