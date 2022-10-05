//print non diagonal elements of an array

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

		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j || j==n-i-1)
			{
			continue;
		    }
		    else
		    cout<<a[i][j]<<" ";
		}
	}
	
	
}
