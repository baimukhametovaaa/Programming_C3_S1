#include "Dot.h"
#include <iostream>
#include <cmath>

class Triangle_Composition {
public:
    class SideException
    {
    public:
        SideException(std::string message): message{message}{}
        std::string get_message() const {return message;}
    private:
        std::string message;
    };
    // конструктор со значениями
    Triangle_Composition(double, double, double, double, double, double);

    // метод, чтобы вычислить длины сторон
    void Sides();

    // метод, чтобы вычислить периметр
    double Perimeter();
    // метод, чтобы вычислить площадь
    double Square();

private:
    Dot d1;
    Dot d2;
    Dot d3;
};


