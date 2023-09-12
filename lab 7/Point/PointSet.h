#include<iostream>
#include<math.h>
#include "Point.h"
using namespace std;
class PointSet
{	
	public:	
		PointSet()
		{
			Point temp;
			for(int i=0; i<10; i++)
				p[i]=temp;
		}
		
		void insert(Point p1)
		{
			int i;
			if(search(p1)==-1){
				for(i=0; i<10; i++)
					if(p[i].getX()==0 && p[i].getY()==0)
						break;
				p[i]=p1;
			}
				
		}

		void delete_point(Point p1)
		{
			int s=search(p1);
			if(s==-1)
				cout<<"not found"<<endl;
			else{
				for(int j=s; j<size()-1; j++)
					p[j]=p[j+1];

				Point temp;
				p[size()-1]=temp;
			}

		}

		Point symmetry(Point p1)
		{
			Point p2;
			int x=p1.getX();
			int y=p1.getY();
			p2.setX(-x);
			p2.setY(-y);			
			return p2;
		}
	
		int search(Point p1)
		{
			int i, found=-1;
			Point p2, p3;
			p2=symmetry(p1);

			for(i=0; i<size(); i++)
			{
				p3 = symmetry(p[i]);
				
				if(p2.getX()==p[i].getX() && p2.getY()==p[i].getY())
				{
					found=i;
					break;
				}
					
				if(p2.getX()==p3.getX() && p2.getY()==p3.getY())
				{
					found=i;
					break;
				}
			}

			return found;
		}	

		void print_furthest()
		{
			int max_index=0;
			double max=0.0, temp;
			for(int i=0; i<size(); i++)
			{	
				temp=sqrt((p[i].getX()-0)*(p[i].getX()-0)+(p[i].getY()-0)*(p[i].getY()-0));
				if(temp>max){
					max=temp;
					max_index=i;
				}
			}
			p[max_index].print();	
		}		

		int size()
		{
			int i;
			for(i=0;i<10; i++)
				if(p[i].getX()==0 && p[i].getY()==0)
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
				p[i].print();	
			}
		}

		
			
	private:
		Point p[10];
};








