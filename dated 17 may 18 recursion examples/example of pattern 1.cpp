// program to calculate sum of x + x^3/3! + x^5/5! + ... + x^2n-1/(2n-1)!

#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	float n,sum=0,fact=1,j;
	cout<<"Enter a number\n";
	cin >> n;
	float i;
	for(i=1;i<=n;i++)
	{
		j=2*i-1;
		while(j!=1)
		{
			fact=fact*(j);
			j--;
		}
		j=2*i-1;
		sum += pow(i,j)/(fact);
		//fact=1;
	}
	cout<<sum;
	return 0;
}
