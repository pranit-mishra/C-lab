#include<iostream>
using namespace std;
class Vector
{
	private:
		int a,b,c;
	public:
		Vector()
		{
		}
		Vector(int x, int y ,int z)
		{
			a=x;
			b=y;
			c=z;
		}
		void display()
		{
			cout<<a<<"i +"<<" "<<b<<"j +"<<" "<<c<<"k"<<endl;
		}
		friend Vector operator +(Vector v1, Vector v2);
};
		Vector operator +(Vector v1, Vector v2)
		{
			Vector temp;
			temp.a = v1.a + v2.a ;
			temp.b = v1.b + v2.b;
			temp.c = v1.c + v2.c;
			return temp;
		}
int main()
{
	Vector v1(2,4,6);
	Vector v2(6,4,2);
	Vector v3;
	v3 = v1+v2;
	cout<<"First vector = ";
	v1.display() ;
	cout<<"Second vector = ";
	v2.display() ;
	cout<<"Sum of two vector = ";
	v3.display() ;
	return 0;
}
