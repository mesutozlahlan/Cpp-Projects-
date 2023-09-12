#include<iostream>
#include<math.h>

#include "Triangle.h"

using namespace std;

Triangle::Triangle()
{
	Triangle(0,0,0,0,0,0);
}

Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3)
{
	a=CalculateSideLength(x1, y1, x2, y2);
	b=CalculateSideLength(x2, y2, x3, y3);
	c=CalculateSideLength(x3, y3, x1, y1); 	
}
	
double Triangle::CalculateSideLength(double x1, double y1, double x2, double y2)
{
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

void Triangle::set_a(double num){a=num;}
void Triangle::set_b(double num){b=num;}
void Triangle::set_c(double num){c=num;}
double Triangle::get_a(){return a;}
double Triangle::get_b(){return b;}
double Triangle::get_c(){return c;}

double Triangle::Area()
{
	double s=(a+b+c)/2;	
	return sqrt(s*(s-a)*(s-b)*(s-c));;
}
double Triangle::Perimeter()	
{
	return (a+b+c);
}

void Triangle::print()
{
	cout<<a<<" "<<b<<" "<<c<<" "<<endl;
	cout<<"Area:"<<Area()<<endl;
	cout<<"Perimeter:"<<Perimeter()<<endl;
}


