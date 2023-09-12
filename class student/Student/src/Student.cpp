#include "Student.h"
#include<iostream>
using namespace std;

Student::Student(string n,int i,int g){
name=n;
id=i;
grade=g;
}
Student::Student(){
name="Ahmet";
id=12345;
grade=51;
}
string Student::getName(){
return name;
}
void Student::setName(string n){
name =n;
}
int Student::getId(){
return  id;
}
void Student::setId(int i){
id=i;
}
int Student::getGrade(){
return grade;
}
void Student::setGrade(int g){
grade=g;
}
void Student::print(){
cout<<"name : "<<getName()<<endl;
cout<<"id : "<<getId()<<endl;
cout<<"grade : "<<getGrade()<<endl;
cout<<endl;
}

