#include<iostream>
using namespace std;

class Point
{	
	public:	
		Point();
		Point(int, int);
		void set_x(int);
		void set_y(int);
		int get_x();
		int get_y();
		void operator~();

        	friend Point operator*(const Point &p1, const Point &p2);
		friend std::istream& operator>> (std::istream &in, Point &obj);
		friend std::ostream& operator<< (std::ostream &out, const Point &point);
	private:
		int x,y;
};








