#include<iostream>
#include "RationalSet.h"

using namespace std;

int main()
{
	RationalSet rs;
	int x, y;
	cin>>x>>y;		
	Rational x1(x, y);
	cin>>x>>y;		
	Rational x2(x, y);
	cin>>x>>y;;		
	Rational x3(x, y);
	cin>>x>>y;		
	Rational x4(x, y);
	cin>>x>>y;		
	Rational x5(x, y);
	cin>>x>>y;		
	Rational x6(x, y);
	cin>>x>>y;		
	Rational x7(x, y);
	cin>>x>>y;		
	Rational x8(x, y);

	cout<<"Initial RationalSet"<<endl;
	rs.print();

	cout<<"RationalSet after insertion"<<endl;
	rs.insert(x1);
	rs.insert(x2);
	rs.insert(x3);
	rs.insert(x4);
	rs.insert(x5);
	rs.print();
	
	cout<<"RationalSet after first element deleted"<<endl;
	rs.delete_rational(x6);
	rs.print();

	cout<<"RationalSet after second element deleted"<<endl;
	rs.delete_rational(x7);
	rs.print();

	cout<<"RationalSet after insertion"<<endl;
	rs.insert(x8);
	rs.print();

	return 0;
}

