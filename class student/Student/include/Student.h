#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
using namespace std;
class Student
{
    private:
        string name;
        int id;
        int grade;

    public:
        string getName();
        void setName(string n);

        int getId();
        void setId(int i);

        int getGrade();
        void setGrade(int g);
        Student();
        Student (string n,int i,int g);
        void print();
};

#endif // STUDENT_H
