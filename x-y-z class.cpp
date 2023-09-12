#include<iostream>
using namespace std;
class Ratio{
	public:
		Ratio(){
			num=0;
			den=1;
		}
		Ratio(int a){
			num=a;
			den=1;
		}
		Ratio(int a,int b){
			num=a;
			den=b;
		}
		double convert(){
			return (double)num/den;
			
		}
		void invert(){
			int temp=num;
			num=den;
			den=temp;
		}
		void print(){
			cout<<num<<"/"<<den;
		}
		private:
			int num,den;
};
int main(){
	Ratio x;
	cout<<"x = ";x.print();
	cout<<"= "<<x.convert()<<endl;
	x.invert();
	cout<<"1/x = ";x.print();
	cout<<endl;
	Ratio y(5);
	cout<<"y = ";y.print();
	cout<<"= "<<y.convert()<<endl;
	y.invert();
	cout<<"1/y = ";y.print();
	cout<<endl;
	Ratio z(8,3);
	cout<<"z = ";z.print();
	cout<<"= "<<z.convert()<<endl;
	z.invert();
	cout<<"1/z = ";z.print();
	cout<<endl;
		
}

