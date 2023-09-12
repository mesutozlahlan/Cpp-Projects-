#include<iostream>


#include "Complex.h"

using namespace std;

int main()
{	
    Complex c1(10, 5), c2(2, -1), c3(7, 8);
    Complex c4; 
    cin>>c4;
    cout<<c2*c4;
    c1 += c3;
    cout<<c1;
    
    return 0;
}
