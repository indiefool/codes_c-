// sum of digits using recursion

#include <iostream>
#include<math.h>
using namespace std;
int main()
{
   int sum(int);
    int n;
    cout<<"Enter a number\n";
	cin >>n;
	int s1=sum(n);
	cout <<"The sum of the digits of "<<n<< " is "<< s1;
	return 0;
}
int sum(int x)
{
	
	if(x==0)
	{
		return 0;
	}
	else
	{
		return x%10+ sum(x/10);
	}
}
