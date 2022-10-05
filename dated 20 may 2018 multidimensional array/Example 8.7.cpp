//exampple 8.7:-write a program which reads two arrays/matrix and then print a matrix which is addition of these two matrix
#include<iostream>
using namespace std;
int main()
{
	int m,n,i,j;
	cout<<"Enter the values of m and n\n";
	cin >>m>>n;
	int a[m][n];
	int b[m][n];
	int c[m][n];
	
	cout<<"Enter the values in the two arrays\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>b[i][j];
		}
	}
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=a[i][j]+b[i][j];
		}
	}
	cout<<endl;
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
}

