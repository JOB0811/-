#pragma once
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Teacher
{
private:
    std::string name;
    int age;
    char Career[];



public:
    // 생성자
    Teacher(const string& name, int age, char grade) : name(name), age(age), grade(grade) {}

    // 소멸자 (여기서는 특별한 처리가 필요하지 않아서 명시적으로 정의하지 않음)

    // 학생 정보 출력
    void display() {
        cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << std::endl;
    }
};

