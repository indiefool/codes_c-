#include<iostream>
using namespace std;
void subtract(int t[][2],int p[][2])
{
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			t[i][j]=t[i][j]-p[i][j];
			
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<t[i][j];
		}
	}
}
int main()
{
int i,j;
	int a[2][2],b[2][2];
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		cin>>a[i][j];
		
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		cin>>b[i][j];
		
	}
	subtract(a,b);
	return 0;
	
}
