#include <iostream>
using namespace std;
/* Implement a Matrix class for 2-by-2 matrices. Include a default
 * constructor,an inverse() function that returns the inverse of the
 * matrix, a det() function that returns the determinant of the matrix,
 * a Boolean function isSingular() that returns 1 or 0 according to
 * whether the determinant is zero, and a print() function. */

class Matrix {
  private:
		double a, b, c, d;
	public:
	Matrix()// default constructor
		{
			a = 0;
			b = 0;
			c = 0;
			d = 0;
		} 
	Matrix(double A, double B, double C, double D)//other constructor
		{
			a = A;
			b = B;
			c = C;
			d = D;
		}

	Matrix inverse()//inverse function(Note: control the matrix isSingular or not.) 
		{
			double k;
			if(isSingular()==false)
			{
				k = 1/det();
				Matrix inv_Matrix(k*d, -k*b, -k*c, k*a);
				return inv_Matrix;	
			}
			else
			{
				k=0;
				Matrix inv_Matrix;
				return inv_Matrix;			
			}


		}
	double det()// calculate the determinant 
		{
			double determinant = a*d - b*c;
			return determinant;
		}
	bool isSingular()// if the determinant is 0 then its singular otherwise its not singular. 
		{
			if (det() == 0)
				return true;
			else
				return false;
		}
	void print() //print
		{
			cout << a << " " << b <<" "<< c << " " << d << endl;
		}
	};

int main() 
{
	double a, b, c, d;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	Matrix s_Matrix(a, b, c, d);
	double det = s_Matrix.det();
	cout<<det<<endl;
	Matrix inv_Matrix=s_Matrix.inverse();
	inv_Matrix.print();
	return 0;
}
