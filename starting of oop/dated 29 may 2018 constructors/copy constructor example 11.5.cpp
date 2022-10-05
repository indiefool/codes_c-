// Example 11.5
// Write a program which reads a complex number and copy that into another .Use copy constructor for writing the program.

#include<iostream>
using namespace std;
class complex
{
	int r,i;
	
	public :
		complex(int a,int b)
		{
			r=a;
			i=b;
		}
		complex(complex &c)
		{
			r=c.r;
			i=c.i;
		}
		void show()
		{
			cout<<r<<" + i"<<i<<endl;
		}
};
int main()
{
	int x,y;
	cout<<"Enter the real part\n";
	cin>>x;
	cout<<"Enter the imaginary part\n";
	cin>>y;
	complex c1(x,y); //first constructor called
	complex c2(c1); //copy constructor called
	cout<<"First constructor is "<<endl;
	c1.show();
	cout<<"Second constructor is "<<endl;
	c2.show();
}
