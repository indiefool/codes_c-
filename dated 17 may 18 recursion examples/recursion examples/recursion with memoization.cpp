//Recursion with memoization

/* What is the need of it???
Ans:- This saves the time complexity of the program .
*/
#include<iostream>
using namespace std;
int F[51];
int fib(int x)
{
    if(x<=1)
        return x;
    if(F[x] != -1)
    return F[x];
    return fib(x-1) + fib(x-2);
}
int main()
{
	int i;
	for(i=0;i<51;i++)
	{
		F[i]=-1;
	}
    int n;
    cout<<"Enter the vlue of x\n";
    cin>>n;
    int y=fib(n);
   cout <<y;
    return 0;
}

