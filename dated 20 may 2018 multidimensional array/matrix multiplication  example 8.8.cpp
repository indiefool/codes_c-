//Multiplication of matrices 

#include<iostream>
using namespace std;
int main()
{
	int m,n,o,p,i,j;
	cout<<"Enter the values of m and n and o and p\n";
	cin >>m>>n>>o>>p;
	int a[m][n];
	int b[o][p];
	int c[m][p];
	
	cout<<"Enter the values in the two arrays\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
		for(i=0;i<o;i++)
	{
		for(j=0;j<p;j++)
		{
			cin>>b[i][j];
		}
	}
	int k=0;
	if(n==o)
	{
		for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		{
		  c[i][j]=0;
		  for(k=0;k<n;k++)	
		  	c[i][j] +=a[i][k]*b[k][j];
		 
		}
	}
	
	cout <<endl;
		for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		{
		  cout <<c[i][j]<<" ";
		  
		 
		}
		cout<<endl;
	}
		
	}
	else
	cout<<"Matrix multiplication is not possible";
	
	
	return 0;
}
