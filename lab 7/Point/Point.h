#include<iostream>
using namespace std;
class Point
{	
	public:	
		Point(int a=0, int b=0){
				x =a;
		y=b;}
		void setX(int a) {x=a;}
		void setY(int b) {y=b;}
		int getX() {return x;}
		int getY() {return y;}
		void print()
		{
			cout<<"("<<x<<","<<y<<")"<<endl;	
		}
	private:
		int x,y;
};








