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
    // ������
    Teacher(const string& name, int age, char grade) : name(name), age(age), grade(grade) {}

    // �Ҹ��� (���⼭�� Ư���� ó���� �ʿ����� �ʾƼ� ��������� �������� ����)

    // �л� ���� ���
    void display() {
        cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << std::endl;
    }
};

