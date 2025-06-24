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
class beta : public alpha
{
	private:
		int b;
	public:
		beta(int x , int y):alpha(x)
		{
			b = y;
		}
		void showb()
		{
			cout<<"Value of b : "<<b<<endl;
		}
};
int main()
{
	beta b1(2,4);
	b1.showa() ;
	b1.showb() ;
	return 0;
}
