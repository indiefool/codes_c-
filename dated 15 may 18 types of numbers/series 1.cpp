//to find sum of (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include<iostream>
using namespace std;
int main()
{
	int n,i,j,sum=0;
	cout<<"Enter a number\n";
    cin >>n;
    for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			sum +=j;
		}
		
	}
	cout<<sum;
	return 0;
}
