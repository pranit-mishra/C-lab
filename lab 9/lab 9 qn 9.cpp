#include<iostream>
using namespace std;
class Shape
{
	protected:
		int base,height;
	public:
		void getdata(int x , int y)
		{
			base = x;
			height = y;
		}
		virtual void area() = 0;
};
class Triangle: public Shape
{
	public:
		void area()
		{
		   cout<<"Area of triangle : "<<(0.5*base*height)<<endl;
		}
};
class Rectangle: public Shape
{
	public:
		void area()
		{
			cout<<"Area of rectangle : "<<(base*height)<<endl;
		}
};
int main()
{
	Shape * s1;
	Triangle t1;
	Rectangle r1;
	t1.getdata(2,4);
	r1.getdata(5,6);
	s1 = &t1;
	s1->area();
	s1 = &r1;
	s1->area();
	return 0;
}
