// fiboacci series using recursion

#include <iostream>
#include<math.h>
using namespace std;
int fib(int);
int a1=1;
	int a2 = 1;
int main()
{
   int n;
   cout << "Enter a number\n";
   cin >>n;
   cout<<"1 1 ";
   fib(n-2);
	return 0;
}
int fib(int x)
{
	if(x==0)
	{
		return 0;
	}
	int a3 = a2+a1;
	
	cout<<a3<<" ";
	
	a1=a2;
	a2=a3;
	fib(x-1);
}
