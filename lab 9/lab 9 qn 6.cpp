#include<iostream>
using namespace std;
class Arithmetic
{
	private:
		float num;
	public:
		void getdata()
		{
			cout<<"Enter any number : "<<endl;
			cin>>num;
		}
		void display()
		{
			cout<<num<<endl;
		}
		friend Arithmetic operator *(Arithmetic a, Arithmetic b);
		
};
Arithmetic operator *(Arithmetic a, Arithmetic b)
{
	Arithmetic temp;
	temp.num =  a.num*b.num;
	return temp;
}
int main()
{
	Arithmetic a,b,c;
	a.getdata();
	b.getdata();
	cout<<"Multiplication of two objects : "<<endl;
	c = a*b;
	c.display() ;
	return 0;
}
