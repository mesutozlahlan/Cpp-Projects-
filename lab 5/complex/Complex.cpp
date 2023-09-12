#include<iostream>
#include<math.h>

#include "Complex.h"

Complex::Complex()
{
 	
}
Complex::Complex(double r, double im)
{
	setReal(r);
	setImag(im);
}
double Complex::getReal()
{
	return real;
}
void Complex::setReal(double r)
{
	real = r;
}
double Complex::getImag()
{
	return imag;
}
void Complex::setImag(double im)
{
	imag = im;
}
  
Complex Complex::operator+=(const Complex &c2)
{
	this->real = this->real + c2.real;
	this->imag = this->imag + c2.imag;
	return *this;
}
Complex operator* (Complex const &c1, Complex const &c2) 
{ 
	Complex c3;
	c3.real = c1.real*c2.real-c1.imag*c2.imag;
	c3.imag = c1.imag*c2.real+c1.real*c2.imag;
    return c3; 
}

std::ostream& operator<< (std::ostream &out, const Complex &obj)
{
    if(obj.real!=0){
	    if(obj.imag>=0)
	    	out << obj.real << " + i" << obj.imag <<endl; 
	    else
		out << obj.real << " - i" << obj.imag*(-1) <<endl; 
    }
    else{
	 if(obj.imag>=0)
	    	out << "i" << obj.imag <<endl; 
	    else
		out << "- i" << obj.imag*(-1) <<endl; 
    }
	

    return out; 
}
std::istream& operator>> (std::istream &in, Complex &obj)
{
    in >> obj.real;
    in >> obj.imag;
 
    return in;
}







