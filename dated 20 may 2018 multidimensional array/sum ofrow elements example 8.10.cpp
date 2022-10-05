//store sum of each row in one dimensional array

#include<iostream>
using namespace std;
int main()
{
	int m,n,i,j,sum;
	cout<<"Enter the values of m and n\n";
	cin >>m>>n;
	int a[m][n];
	int b[m];
	
	cout<<"Enter the values in the  array\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<m;i++)
	{ sum=0;
		for(j=0;j<n;j++)
		{
			sum += a[i][j];
		}
		b[i]=sum;
	}
	for(i=0;i<m;i++)
	{
		cout <<"sum of "<<i+1<<"  row = ";
		cout<<b[i]<<endl;
		
	}
	
	
	
	return 0;
}
