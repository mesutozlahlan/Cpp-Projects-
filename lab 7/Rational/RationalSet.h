#include<iostream>
#include<math.h>
#include "Rational.h"
using namespace std;
class RationalSet
{	
	public:	
		RationalSet()
		{
			Rational temp;
			for(int i=0; i<10; i++)
				r[i]=temp;
		}
		
		void insert(Rational r1)
		{
			int i;
			int s=search(r1);
			if(s==-1)
			{
				for(i=0; i<10; i++)
					if(r[i].getX()==0 && r[i].getY()==0)
						break;
				r[i]=r1;
			}
		}

		void delete_rational(Rational r1)
		{
			int s=search(r1);
			if(s==-1)
				cout<<"not found"<<endl;
			else{
				for(int j=s; j<size()-1; j++)
					r[j]=r[j+1];
				Rational temp;
				r[size()-1]=temp;
			}

		}

		int search(Rational r1)
		{
			int i, found=-1;
			Rational r2, r3;
			r2=reduce(r1);
			
			for(i=0; i<size(); i++)
			{
				r3 = reduce(r[i]);	
				if(r2.getX()==r3.getX() && r2.getY()==r3.getY())
				{
					found=i;
					break;
				}
			}

			return found;
		}	

		Rational reduce(Rational r1)
		{
			Rational r2=r1;						
			if(r2.getX()==0 || r2.getY()==0)
			{
				r2.setX(0);
				r2.setY(1);
				return r2;
			}

			if(r2.getY()<0)
			{
				r2.setX(r2.getX()*-1);
				r2.setY(r2.getY()*-1);
			}

			if(r2.getY()==1) 
				return r2;
			int sgn=(r2.getX()<0?-1:1);
			int m = sgn*r2.getX();
			int n= r2.getY();

			if(m<n) swap(m,n);
			while(n>0){
				int r=m%n;
				m=n;
				n=r;		
			}
			
			r2.setX(r2.getX()/m);
			r2.setY(r2.getY()/m);
			return r2;			
		}		

		int size()
		{
			int i;
			for(i=0; i<10 ; i++)
				if(r[i].getX()==0 && r[i].getY()==0)
					break;
			return i;
		}		
		
		void print()
		{
			int s=size();
			if(s==0)
				cout<<"empty set"<<endl;
			for(int i=0; i<s; i++)
			{
				r[i].print();	
			}
		}
	private:
		Rational r[10];
};








