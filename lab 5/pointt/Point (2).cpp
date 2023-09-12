#include<iostream>
#include<math.h>

#include "Point.h"

using namespace std;
Point::Point()
{

}

Point::Point(int x1, int y1)
{
	set_x(x1);
	set_y(y1);
}
Point operator*(const Point &p1, const Point &p2)
{
	return Point((p1.x * p2.x), (p1.y * p2.y));
}

std::ostream& operator<< (std::ostream &out, const Point &point)
{
    out << "P(" << point.x << ", " << point.y << ")"<<endl; 

    return out; 
}

std::istream& operator>> (std::istream &in, Point &obj)
{
    
    in >> obj.x;
    in >> obj.y;
 
    return in;
}

void Point::operator~()
{

	this->x = -this->x;
	this->y = -this->y;

}

void Point::set_x(int num){x=num;}
void Point::set_y(int num){y=num;}
int Point::get_x(){return x;}
int Point::get_y(){return y;}






