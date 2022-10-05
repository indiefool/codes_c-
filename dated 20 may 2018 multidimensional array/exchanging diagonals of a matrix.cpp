// program to accept a matrix of order M X N and interchange the Diagonals
#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"Enter the values of m and n\n";
	cin >>m>>n;
	int i,j;
	int a[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		cin>>a[i][j];
	}
	int temp;
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				temp=a[i][j];
				a[i][j]=a[i][n-i-1];
				a[i][n-i-1]=temp;
			}
			
		}
	}
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		cout<<a[i][j]<<" ";
		cout<<endl;
	}
	
}
