//Example of Container class 
// CONTAINER CLASS :- When object of a class is declared as  a member of another class ,it is called as container class.

#include<iostream>
using namespace std;

class B1
{
	private :
		int a;
	public :
		void output()
		{
			a = 20;
			cout<<a<<endl;
		}
};
class B2
{
	private :
		int b;
	public :
		void outputb()
		{
			b = 30;
			cout<<b<<endl;
		}
};
class D
{
	private :
		int c;
	    B1 obj1;
	    //obj1.output();
	    B2 obj2;
	    //obj2.outputb();
	public :
		void outputc()
		{
			obj1.output();
			obj2.outputb();
			c = 40;
			cout<<c<<endl;
		}
};
int main()
{
	D obj3;
	obj3.outputc();
}

