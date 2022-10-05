/* ques 2 - Write a program to find fibonacci series illustrate overloading prefix , ++ increment operator .
*/
#include<iostream>
using namespace std;

class fibo
{
	int f0,f1,fib;
	
	public :
		fibo(); // constructor;
		void operator ++ ();
		void display ();
};
fibo :: fibo ()
{
	f0 = 0;
	f1 = 1;
	fib = f0 + f1;
}
void fibo :: operator ++()
{
	f0 = f1;
	f1 = fib;
	fib = f0 + f1;
}
void fibo ::  display()
{
	cout<<fib<<" ";
}
int main()
{
	fibo pika;
	int n;
	cout<<"Enter a value upto which you want to display fibonacci series \n";
	cin>>n;
	for(int i=0;i<n;++i)
	{
		pika.display();
		++ pika;
	}
	
}
