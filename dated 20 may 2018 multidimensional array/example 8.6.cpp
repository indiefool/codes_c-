// example of multidimensional array

#include<iostream>
using namespace std;
int main()
{
	int m,n,i,j;
	cout<<"Enter the values of m and n\n";
	cin >>m>>n;
	int a1[m][n];
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a1[i][j];
			
		}
		
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			
			cout<<a1[i][j]<<" ";
			
		}
		cout<<endl;
		
	}
	
	
	
}

