#include<iostream>
using namespace std;
class Matrix {
	public:
		Matrix(double x=0,double y=0,double z=0,double t=0):
		x(x),y(y),z(z),t(t){}
		double det(){ return x*t-z*y;}
		void print(){
			cout<<x<<" "<<y<<endl;
			cout<<z<<" "<<t<<endl;
		}
		private:
			double x,y,z,t;
		};
		
int main(){
	Matrix m(5,3,2,1);
	m.print()
;
cout<<m.det();
return 0;
}
