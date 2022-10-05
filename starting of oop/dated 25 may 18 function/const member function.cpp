//program of use of constant member function

#include<iostream>
using namespace std;

class abc
{
	int a;
	public :
		void assign()
		{
			a = 10;
			
		}
		void add(abc const & c1,abc const & c2)
		{
		  	a = c1.a + c2 .a;
		  	
		}
		void show ()
		{
			cout << "a ="<<a<<endl;
			
		}
};
int main()
{
	abc x,y,z;
	x.assign();
	y.assign();
	z.add(x,y);
	z.show();
}
