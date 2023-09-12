#include<iostream>
//#include "Point.h"
#include "PointSet.h"

using namespace std;

int main()
{
	PointSet ps;
	int x, y;
	cin>>x>>y;		
	Point x1(x, y);
	cin>>x>>y;		
	Point x2(x, y);
	cin>>x>>y;;		
	Point x3(x, y);
	cin>>x>>y;		
	Point x4(x, y);
	cin>>x>>y;		
	Point x5(x, y);
	cin>>x>>y;		
	Point x6(x, y);
	cin>>x>>y;		
	Point x7(x, y);
	cin>>x>>y;		
	Point x8(x, y);

	cout<<"Initial PointSet"<<endl;
	ps.print();

	cout<<"PointSet after insertion"<<endl;
	ps.insert(x1);
	ps.insert(x2);
	ps.insert(x3);
	ps.insert(x4);
	ps.insert(x5);
	ps.print();
	
	cout<<"PointSet after first element deleted"<<endl;
	ps.delete_point(x6);
	ps.print();

	cout<<"PointSet after second element deleted"<<endl;
	ps.delete_point(x7);
	ps.print();

	cout<<"PointSet after insertion"<<endl;
	ps.insert(x8);
	ps.print();

	cout<<"The furthest element to Point(0,0)"<<endl;
	ps.print_furthest();

	return 0;
}

