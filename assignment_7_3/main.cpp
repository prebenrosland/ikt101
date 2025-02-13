#include <iostream>

class Student{
public:
    std::string name;
    std::string course;
    std::string grade;
};

int main() {
    Student student;
    do {
        std::cout << "Name: ";
        std::getline(std::cin, student.name);
        if (student.name == "stop"){
            break;
        }
        do {
            std::cout << "Course: ";
            std::getline(std::cin, student.course);
            if (student.course == "stop"){
                break;
            }
            std::cout << "Grade: ";
            std::getline(std::cin, student.grade);
            std::cout << student.name << " - " << student.course << " - " << student.grade << std::endl;
        }
        while (student.course != "stop");

    }
    while (student.name != "stop");


    return 0;
}