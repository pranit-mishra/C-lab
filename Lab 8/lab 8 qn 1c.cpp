#include<iostream>
using namespace std;
class alpha
{
	private:
		int a;
	public:
		alpha(int x)
		{
			a = x;
		}
		void showa()
		{
			cout<<"Value of a : "<<a<<endl;
		}
};
class beta 
{
	private:
		int b,c;
	public:
		beta(int y,int z)
		{
			b = y; 
			c = z;
		}
		void showb()
		{
			cout<<"Value of b : "<<b<<endl;
			cout<<"Value of c : "<<c<<endl;	
		}
};
class gamma:public alpha,public beta
{
	private:
		int d,e;
	public:
		gamma(int x , int y,int z,int m,int n):alpha(x),beta(y,z)
		{
			d = m;
			e = n;
		}
		void showg()
		{
			cout<<"Value of d : "<<d<<endl;
			cout<<"Value of e : "<<e<<endl;
		}
};
int main()
{
	gamma g1(2,4,5,6,7);
	g1.showa() ;
	g1.showb() ;
	g1.showg() ;
	return 0;
}
