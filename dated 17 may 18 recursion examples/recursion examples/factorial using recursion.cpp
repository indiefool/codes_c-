// program of recursion for FACTORIAL

#include <iostream>
#include<math.h>
using namespace std;

long int f(long int);
int main()
{
	 long int n;
	cout<<"Enter a number\n";
	cin >>n;
	long int result = f(n);
	cout <<"The factorial of "<<n<< " is "<<result;
    
	return 0;
}
long int f(long int x)
{
	
	if(x==0||x==1)
	{
		return 1;
	}
	else
	{
	
		return x*f(x-1);
		
	}
	
}



