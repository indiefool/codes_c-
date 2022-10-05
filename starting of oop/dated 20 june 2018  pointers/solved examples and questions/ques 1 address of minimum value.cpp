// program to obtain address of minimum value of a given array.

#include<iostream>
using namespace std;

int main()
{
	int c[20] = {5,26,4,8,656,10,1,25,0,-1,44};
	int i,j;
	int min =c[0];
	for(i=0;i<20;i++)
	{
		
		if(min>c[i])
		min = c[i];
		
	}
	cout<<"address of the smallest value in the array is "<<endl;
	for(i=0;i<20;i++)
	{
		if(min == c[i])
		cout<<&c[i]<<" ";
	}
	
}
