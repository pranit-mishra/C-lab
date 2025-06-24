#include<iostream>
#include<cstring>
using namespace std;
class Publication
{
	private:
		char title[20];
		int price;
	public:
		Publication(char t[],int p)
		{
		  strcpy(title,t);
		  price = p;	
		}
		void display()
		{
			cout<<"Title of the book : "<<title<<endl;
			cout<<"Price of the book : "<<price<<endl;
		}
};
class Sales
{
	private:
		int tms;
	public:
		Sales(int tm)
		{
			tms = tm;
		}
		void display()
		{
			cout<<"Total money sales of book :"<<tms<<endl;
		}
};
class Book:public Publication,public Sales
{
	private:
		char authorname[20];
		int pagecount;
	public:
		Book(char t[],int p, int tm ,char n[],int pc):Publication(t,p),Sales(tm)
		{
			strcpy(authorname,n);
			pagecount = pc;
		}
		void dispaly()
		{
			cout<<"Enter the name of the author : "<<authorname<<endl;
			cout<<"Page count of the book : "<<pagecount<<endl;
		}
};
int main()
{
	Book b1("Mind",490,4900,"Ram",510);
	b1.Publication::display ();
	b1.Sales::display ();
	b1.dispaly() ;
	return 0;  
}
