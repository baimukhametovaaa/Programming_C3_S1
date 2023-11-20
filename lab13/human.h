#include <string>
#include <sstream>
#include <iostream>
#pragma once
class human {
public:
    // конструктор
    human(std::string last_name, std::string name, std::string
    second_name)
    {
        this->last_name = last_name;
        this->name = name;
        this->second_name = second_name;
    }

    // получение ФИО
    virtual void get_data(){
        std::cout << "Фамилия: " << last_name << std::endl;
        std::cout << "Имя: " << name << std::endl;
        std::cout << "Отчество: " << second_name << std::endl;
    }

private:
    std::string name; // имя
    std::string last_name; // фамилия
    std::string second_name; // отчество
};