// (1^1) + (2^2) + (3^3) + (4^4) + (5^5) + ... + (n^n)

#include<iostream>
# include<math.h>
using namespace std;
int main()
{
	int n,i,j,sum=0,fact=1;
	cout<<"Enter a number\n";
    cin >>n;
    for(i=1;i<=n;i++)
	{
		
		{
			fact=pow(i,i);
		}
		sum += fact;
		fact=1;
		
	}
	cout<<sum;
	return 0;
}
