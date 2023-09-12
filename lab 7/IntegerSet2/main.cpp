#include <iostream>
#include "IntegerSet2.h"

using namespace std;

int main()
{
	IntegerSet2 i1;
	IntegerSet2 i2;

	i1.insertElement(0);
	i1.insertElement(5);
	i1.insertElement(2);
	i1.insertElement(4);
	i1.insertElement(1);
	i1.insertElement(8);
	i1.insertElement(6);
	cout<<"i1= ";	
	i1.print();

	i2.insertElement(0);
	i2.insertElement(5);
	i2.insertElement(2);
	i2.insertElement(4);
	i2.insertElement(1);
	i2.insertElement(6);
	cout<<"i2= ";
	i2.print();

	cout<<i1.isEqualTo(i2)<<endl;
	
	i1.deleteElement(8);
	cout<<"i1= ";	
	i1.print();
	cout<<i1.isEqualTo(i2)<<endl;
	
	return 0;



}

