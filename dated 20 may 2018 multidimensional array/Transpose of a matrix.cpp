//Transpose of a matrix

#include<iostream>
using namespace std;
int main()
{
		int m,n,i,j;
	cout<<"Enter the values of m and n\n";
	cin >>m>>n;
	int a[m][n];
	
	
	cout<<"Enter the values in the  array\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Transpose of the matrix is "<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<a[j][i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
