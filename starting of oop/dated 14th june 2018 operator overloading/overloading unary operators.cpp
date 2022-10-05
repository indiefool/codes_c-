//Example 13.1 :- Write a program which reads a complex number , increment real and imaginary part and then print.
// Write it using operator overloading concept.
// Example of unary operator.

#include<iostream>
using namespace std;
class complex
{
	float r;
	float i;
	
	public :
		void getdata()
		{
			cout<<"Eeter the value of r and i \n";
			
			cin>>r>>i;
		}
		void operator ++()
		{
			 ++r;
			 ++i;
		}
		void output()
		{
			cout<<"the incremented complex number is "<<endl;
			cout<<r<<" +i"<<i<<endl;
		}
};
int main()
{
	float r,i;
	
    complex z;
	z.getdata();
    cout<<"Number before increment \n";
    z.output();
    cout<<"Number after increment \n";
    ++z ;
    z.output();
}
