// selection sort

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n\n";
	cin >>n;
	int a[n];
	int i,j;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int min,temp,loc;
	for(i=0;i<n;i++)
	{     
	min=i;
	
		for(j=i+1;j<n;j++)
		{
		if(a[j]>a[min])
		{
		min=j;
		
	}
		}
		temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}
	
	cout<<"The sorted  array  is "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
