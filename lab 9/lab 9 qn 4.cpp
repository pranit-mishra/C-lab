#include<iostream>
using namespace std;
class Complex
{
	private:
		int real;
		int imag;
	public:
		Complex()
		{
		}
		Complex(int r ,int i)
		{
			real = r ;
			imag = i;
		}
		void display()
		{
			cout<<real<<"+"<<imag<<"i"<<endl;
		}
		friend Complex operator +(Complex c1,Complex c2);
};
Complex operator +(Complex c1, Complex c2)
{
	Complex temp;
	temp.real = c1.real + c2.real;
	temp.imag = c1.imag + c2.imag;
	return temp;
}
int main()
{
	Complex c1(2,4);
	Complex c2(5,10);
	Complex c3;
	c3=c1+c2;
	cout<<"c1 = ";
	c1.display() ;
	cout<<"c2 = ";
	c2.display() ;
	cout<<"c3 = ";
	c3.display() ;
	return 0;
}
