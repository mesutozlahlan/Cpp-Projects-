#include <iostream>
#include "IntegerSet.h"
using namespace std;

IntegerSet::IntegerSet()
{
	for(int i =0;i<10;i++)
		set[i]=0;

}

void IntegerSet::insertElement(int i)
{
	set[i]=1;

}


void IntegerSet::deleteElement(int i)
{
	set[i]=0;

}

void IntegerSet::print()
{
	int isSetEmpty = 1;
	
	for(int i =0;i<10;i++){
		if(set[i]==1)
		{
			isSetEmpty = 0;
			break;
		}
	}
	
	if(isSetEmpty == 1)
		std::cout<< "---" ;

	else{
		for(int i =0;i<10;i++)
			std::cout<<set[i] << "  " ;
	}
		
	std::cout<<"\n";
}

bool IntegerSet::isEqualTo(IntegerSet k)
{
	for(int i =0;i<10;i++)
		if(this->set[i] != k.set[i] )
			return false;

	return true;

}


IntegerSet IntegerSet::uniteWith(IntegerSet k)
{
	IntegerSet s;
	for(int i =0;i<10;i++)
	{
		if(this->set[i] == 1 ||  k.set[i] == 1 )
			s.set[i]=1;
		else
			s.set[i]=0;
	}	

	return s;

}


IntegerSet IntegerSet::intersectWith(IntegerSet k)
{
	IntegerSet s;
	for(int i =0;i<10;i++)
	{
		if(this->set[i] == 1 &&  k.set[i] == 1 )
			s.set[i]=1;
		else
			s.set[i]=0;
	}	

	return s;



}

