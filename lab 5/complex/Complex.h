#include<iostream>
using namespace std;
 
class Complex {
	private:
   		double real;
   		double imag;
 
	public:
	   Complex();
	   Complex(double, double);
	   double getReal();
	   void setReal(double real);
	   double getImag();
	   void setImag(double imag);
 	   Complex operator+=(const Complex &c2);

	   friend Complex operator*(const Complex &c1, const Complex &c2);
	   friend std::ostream& operator<< (std::ostream &out, const Complex &obj);
	   friend std::istream& operator>> (std::istream &in, Complex &obj);


};

