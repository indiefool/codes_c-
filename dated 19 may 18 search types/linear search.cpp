// linear search

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n\n";
	cin >>n;
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int p,m;
	cout<<"enter the test value\n";
	cin>>p;
	for(i=0;i<n;i++)
	{
		if(p==a[i])
		{m=i+1;
		break;
		}
	}
	cout<<"The position of " <<p<<" in the array is "<<m;
}
