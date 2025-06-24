#include<iostream>
using namespace std;
class Matrix
{
	private:
	  int mat[3][3];
	  int i , j;
	public:
		void getdata()
		{
			for(i = 0;i<3;i++)
			{
				for (j = 0;j<3;j++)
				{
					cin>>mat[i][j];
				}
			}
		}
		void display()
		{
				for(i = 0;i<3;i++)
			{
				for (j = 0;j<3;j++)
				{
					cout<<mat[i][j];
				}
				cout<<endl;
			}
		}
		Matrix operator +(Matrix m)
		{
			Matrix temp;
				for(i = 0;i<3;i++)
			{
				for (j = 0;j<3;j++)
				{
		        	temp.mat[i][j]=mat[i][j]+m.mat[i][j];
		        }
		    }
			return temp;
		}
};
int main()
{
	Matrix m1,m2,m3;
	cout<<"Enter 1st matrix : "<<endl;
	m1.getdata() ;
	cout<<"Enter 2nd matrix : "<<endl;
	m2.getdata() ;
	cout<<"Sum of matrix : "<<endl;
	m3 = m1 +m2;
	m3.display() ;
	return 0;
}
