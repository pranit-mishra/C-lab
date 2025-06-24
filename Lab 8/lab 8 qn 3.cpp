#include<iostream>
#include<cstring>
using namespace std;
class Person
{
	private:
		char name[20];
		int age;
		char address[20];
	public:
		Person(char n[],int a,char ad[])
		{
			strcpy(name,n);
			age = a;
			strcpy(address,ad);
		}
		void showdata()
		{
			cout<<"Name of the person :"<<name<<endl;
			cout<<"Age of the person :"<<age<<endl;
			cout<<"Address of the person :"<<address<<endl;
		}
};
class Teacher:public Person
{
	private:
		char qualification[20];
		char department[20];
	public:
		Teacher(char n[],int a,char ad[],char q[],char d[]): Person(n,a,ad)
		{
			strcpy(qualification,q);
			strcpy(department,d);
		}
		void showdata()
		{
			cout<<"Qualification:"<<qualification<<endl;
			cout<<"Department : "<<department<<endl;
		}
};
class Student : public Person
{
	private :
		char program[20];
		int semester;
	public:
		Student(char n[],int a,char ad[],char p[],int s):Person(n,a,ad)
		{
			strcpy(program,p);
			semester = s;
		}
			void showdata()
		{
			cout<<"Program:"<<program<<endl;
			cout<<"semester: "<<semester<<endl;
		}
};
int main()
{
	Teacher t1("Ram",21,"KTM","master","computer");
	Student s1("Shyam",12,"pok","bec",2);
	t1.Person::showdata() ;
	t1.showdata();
	s1.Person::showdata() ;
	s1.showdata();  
	return 0;
}
