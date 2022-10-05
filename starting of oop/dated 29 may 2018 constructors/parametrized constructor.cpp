// Write a program which reads two numbers initialised object with these two numbers and then find out multiplication of these two.

#include<iostream>
using namespace std;

class mul
{
	int a,b;
	
	public :
		mul (int x, int y)
		{
			a = x;
			b = y;
		}
		void product()
		{
			int m;
			
			m = a*b;
			cout<<"The product of "<<a<<" and "<<b<<" is "<<m;
		}
};
int main()
{

	int x,y;
	cout<<"Enter the values of x and y\n";
	cin>>x>>y;
	
	mul i1(x,y); // Here we have to give to give the parameters to call the constructor.
	/* also NOTE that we cannot create object as mul i1 because we have a constructor which is parametrized .
	we can create a object like that if class mul have no constructor or constructor with no parameter or argument . 
	A constructor with no argument is called default constructor.*/
	i1.product();
	return 0;
}
