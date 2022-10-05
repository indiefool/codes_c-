// program to print sum of diagonal elements of a matrix (left to right one)
/*
eg if i have a matrix like 1 2 3
                           0 1 0
                           4 5 6
                           then what i mean here is sum of 1 + 1 + 6 */

#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"Enter the values of m(row) and n(coloumn)\n";
	cin >>m>>n;
	int a[m][n];
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	int sum=0;
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
			
			sum += a[i][j];
		    }
		}
	}
	cout<<sum;
	
}
