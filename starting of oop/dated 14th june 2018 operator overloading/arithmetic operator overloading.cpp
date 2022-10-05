// Example of Overloading of Arithmetic operator.
// arithmetic operators are 
                          /* 1. +
                             2. -
                             3. *
                             4. /
                             5. %
*/
#include<iostream>
using namespace std;

class complex 
{
	int real;
	int img;
	
	public :
		complex(int a,int b)
		{
			real = a;
			img = b;
		}
		
		void output()
		{
			cout<<real<<" +i"<<img<<endl;
		}
		complex operator + (complex c)
		{
			
			
			c.real = real + c.real;
			c.img = img + c.img;
			return (c);
		}
};

int main()
{
	complex c1(5,4);
	complex c2(3,2);
	complex c3(4,4);
	
	cout<<"C1 is : "<<endl;
	c1.output();
	cout<<"C2 is : "<<endl;
	c2.output();
	cout<<"C3 is : "<<endl;
	c3.output();
	c3 = c1 + c2;
	cout<<"Now c3 = c1 + c2 is \n";
	c3.output();
}
