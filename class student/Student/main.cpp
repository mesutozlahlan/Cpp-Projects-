#include <iostream>
#include"Student.h"

using namespace std;

int main()
{
    Student Ahmet;
    Ahmet.print();

    Student Mesut("Mesut",18290051,100);
    Mesut.print();
    return 0;
}
