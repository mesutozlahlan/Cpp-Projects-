#include <iostream>
#include "IntegerSet.h"
using namespace std;

int main()
{
	IntegerSet i1;
	IntegerSet i2;

	i1.insertElement(1);
	i1.insertElement(3);
	i1.insertElement(5);
	i1.insertElement(9);
	i1.insertElement(6);
	i1.insertElement(7);
	i1.print();

	i2.insertElement(0);
	i2.insertElement(5);
	i2.insertElement(2);
	i2.insertElement(4);
	i2.insertElement(1);
	i2.insertElement(6);
	i2.print();
	
	IntegerSet i3;
	i3 = i1.intersectWith(i2);
	i3.print();

	i1.deleteElement(6);

	IntegerSet i4;
	i4 = i1.uniteWith(i2);
	i4.print();

	cout<<i1.isEqualTo(i2)<<endl;
	
	return 0;



}

