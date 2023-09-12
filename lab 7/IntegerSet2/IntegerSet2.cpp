#include <iostream>
#include "IntegerSet2.h"

IntegerSet2::IntegerSet2()
{
	for(int i =0;i<10;i++)
		set[i]=0;

}

void IntegerSet2::insertElement(int i)
{
	for(int j=0;j<10;j++)
	{
		if(set[j]==0){
			set[j]=i;
			break;
		}
	}
}


void IntegerSet2::deleteElement(int i)
{
	for(int j=0; j<10; j++){
		if(set[j]==i){
			for(int k=j; k<9; k++)
				set[k]=set[k+1];
			set[9]=0;
			break;
		}
	}
}

void IntegerSet2::print()
{
	int isSetEmpty = 1;
	
	for(int i =0;i<10;i++){
		if(set[i]!=0)
		{
			std::cout<<set[i] << "  ";
			isSetEmpty=0;
		}
	}
	
	if(isSetEmpty == 1)
		std::cout<< "---" ;

	std::cout<<"\n";
}

bool IntegerSet2::isEqualTo(IntegerSet2 k)
{
	for(int i =0;i<10;i++)
		if(this->set[i] != k.set[i] )
			return false;

	return true;

}



void IntegerSet2::sort()
{
	int size, i, j, temp;
	for(size=0; size<10; size++)
		if(set[size]==0)
			break;
	

	for(i=0; i<size; i++)
	{		
		for(j=0;j<size-i;j++)
		{
			
			if(set[j]>set[j+1])
			{
				temp=set[j];
				set[j]=set[j+1];
				set[j+1]=temp;
			}
		}
	}

}

