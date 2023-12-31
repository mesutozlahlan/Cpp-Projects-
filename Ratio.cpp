#include<iostream>
#include<cmath>
using namespace std;
class Ratio {
public: 
Ratio(int n=0, int d=1): num(n),den(d){reduce();}
void print() {cout<<num<<'/'<<den<<endl;}
private:
int num,den;
void reduce();
};

int gcd(int,int);
void Ratio::reduce()
{
	if(num==0 || den==0)
	{
		num=0;
		den=1;
		return;
	}

	if(den<0)
	{
		den*=-1;
		num*=-1;
	}

	if(den==1) 
		return;
	int sgn=(num<0?-1:1);
	int g = gcd(sgn*num,den);
	num/=g;
	den/=g;
}

	int gcd(int m,int n)	
	{
		if(m<n) swap(m,n);
		while(n>0){
		int r=m%n;
		m=n;
		n=r;		
		}
		return m;
	}	

int main()
{
	int num,den;
	cin>>num>>den;
	Ratio y;
	y.print();
	Ratio x(num,den);
	x.print();
}


