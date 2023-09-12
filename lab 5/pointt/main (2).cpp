#include<iostream>

#include "Point.h"

using namespace std;

int main()
{	
	double x1, y1;
	cin>>x1>>y1;	
	Point t1(x1, y1);
	Point t2;
	cin>>t2;
	cout<<t1*t2;
	~t2;
	cout<<t2;

	return 0;
}
