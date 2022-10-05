// write a program which performs the following operation

/*
1. addition of matrix
2. subtraction of matrix
3. multiplication of matrix
*/
#include<iostream>
using namespace std;
int i,j;
class mat
{
	int a[2][2],b[2][2];
	
	public:
		void readmat();
		void addmat();
		void submat();
		void mulmat();
};
void mat::readmat()
{
	cout<<"enter the value in the first matrix\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		cin>>a[i][j];
	}
	cout<<"enter the value in the second matrix\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		cin>>b[i][j];
	}
}
void mat :: addmat()
{
	int temp[2][2];
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		temp[i][j]=a[i][j] + b[i][j];
	}
	cout<<"The sum of the two matrices is\n";
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		cout<<temp[i][j]<<" ";
		cout<<endl;
	}
}
void mat :: submat()
{
		int temp[2][2];
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		temp[i][j]=a[i][j] - b[i][j];
	}
	cout<<"The subtraction of the two matrices is\n";
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		cout<<temp[i][j]<<" ";
		cout<<endl;
	}
}
void mat :: mulmat()
{
	int temp[2][2];
	int k;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			temp[i][j] +=a[i][k] *b[k][j];
		}
		
	}
		cout<<"The multiplication of the two matrices is\n";
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		cout<<temp[i][j]<<" ";
		cout<<endl;
	}
}
int main()
{
	mat s;
	s.readmat();
	s.addmat();
	s.submat();
	s.mulmat();
}

