#include <vector>
#include "human.h"
#include "student.h"
#include "teacher.h"

int main() {
    system("chcp 65001");
    std::vector<int> scores;
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(4);
    scores.push_back(4);
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);

    student* stud = new student("Шевелев", "Сергей", "Сергеевич", scores);

    unsigned int teacher_work_time = 40;
    teacher* tch = new teacher("Позов", "Дмитрий", "Темурович", teacher_work_time);

    std::cout << "Если Вы хотите получить информацию об ученике, введите st. Если Вы хотите получить информацию об учителе, введите tch." << std::endl;
    std::string choice;
    std::cin >> choice;
    if (choice=="st") stud->get_data();
    else tch->get_data();
    return 0;
}