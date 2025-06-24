#include<iostream>
using namespace std;
class Student
{
	protected:
		char name[20];
		char dob[20];
		int roll_no;
		int fees;
		int dis;
		int paidamount;
	public:
		void getdata()
		{
			cout<<"Enter the name of the student : "<<endl;
			cin>>name;
			cout<<"Enter date of birth : "<<endl;
			cin>>dob;
			cout<<"Enter roll number : "<<endl;
			cin>>roll_no;
			cout<<"Enter fees of the student : "<<endl;
			cin>>fees;
		}
		void dicount()
		{
			cout<<"Enter discount amount : "<<endl;
			cin>>dis;
		}
		virtual void dispresult()
		{
		}
		void calculate()
		{
			paidamount = fees - dis;
		}
};
class PG: public Student
{
	public:
		void dispresult()
		{
			cout<<"Name : "<<name<<endl;
			cout<<"Date of birth : "<<dob<<endl;
			cout<<"Roll number : "<<roll_no<<endl;
			cout<<"Fees : "<<fees<<endl;
			cout<<"Discount : "<<dis<<endl;
			cout<<"Paid amount : "<<paidamount<<endl;
		}
};
class UG: public Student
{
	public:
		void dispresult()
		{
			cout<<"Name : "<<name<<endl;
			cout<<"Date of birth : "<<dob<<endl;
			cout<<"Roll number : "<<roll_no<<endl;
			cout<<"Fees : "<<fees<<endl;
			cout<<"Discount : "<<dis<<endl;
			cout<<"Paid amount : "<<paidamount<<endl;
		}
};
int main()
{
	Student *s1,*s2;
	PG p1;
	UG u1;
	s1 =& p1;
	s2 = &u1;
	cout<<"Enter the details of pg student : "<<endl;
	s1->getdata() ;
	s1->dicount() ;
	s1->calculate() ;
	cout<<"Enter the details of ug student : "<<endl;
	s2->getdata() ;
	s2->dicount() ;
	s2->calculate() ;
	cout<<"Details of pg student : "<<endl;
	s1->dispresult() ;
	cout<<"Details of ug student : "<<endl;
	s2->dispresult() ;
	return 0;
}
