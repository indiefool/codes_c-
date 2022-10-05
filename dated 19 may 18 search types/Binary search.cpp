// Binary search

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
	int key,m;
	cout<<"enter the test value\n";
	cin>>key;
	int f=0,l=n-1,mid,re;
	while(f<=l)
	{
		mid=(f+l)/2;
		if(key>a[mid])
		{
			f=mid+1;
		}
		else if(key<a[mid])
		{
			l=mid-1;
		}
		else
		  {
		  re=mid+1;
		  break;
	      }
	}
	if(f<=l)
	cout<<"the position of "<<key<<" in array is "<<re;
	return 0;
}
