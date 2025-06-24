#include<iostream>
#include<cstring>
using namespace std;
class College
{
	private:
		char name[20];
		char location[20];
	public:
		College(char n[], char l[])
		{
			strcpy(name,n);
			strcpy(location,l);
		}
		void display()
		{
			cout<<"Name of the college : "<<name<<endl;
			cout<<"Location of college : "<<location<<endl;
		}
};
class Student:virtual public College
{
	private:
		char name[20];
		int roll_no;
	public:
		Student(char n[],char l[],char sn[],int r):College(n,l)
		{
			strcpy(name,sn);
			roll_no = r;
		}
		void display()
		{
			cout<<"Name of the student : "<<name<<endl;
			cout<<"Roll number of student : "<<roll_no<<endl;
		}
};
class Teacher:virtual public College
{
	private:
		char name[20];
		int code;
	public:
		Teacher(char n[],char l[],char tn[],int c):College(n,l)
		{
			strcpy(name,tn);
			code = c;
		}
		void display()
		{
			cout<<"Name of the teacher : "<<name<<endl;
			cout<<"Code of teacher : "<<code<<endl;
		}
};
class Books:public Student,public Teacher
{
	private:
		char book_name[20];
		char writer_name[20];
		int code;
	public:
    	Books(char n[],char l[],char sn[],int r,char tn[],int c,char bn[],char wn[],int co):Student(n,l,sn,r),Teacher(n, l, tn, c),College(n,l)
	{
		strcpy(book_name,bn);
		strcpy(writer_name,wn);
		code = co;
	}
    	void display()
	{
    	cout<<"Name of the book : "<<book_name<<endl;
    	cout<<"Name of the writer : "<<writer_name<<endl;
	    cout<<"Code of the book : "<<code<<endl;
	}
};
int main()
{
	Books b1("EEMC","Sanepa","Pranit",31,"Pradippaudel",325,"Oop","Vedi",435);
	b1.College::display();
	b1.Student::display();
	b1.Teacher::display() ;
	b1.display() ;
	return 0;
}
