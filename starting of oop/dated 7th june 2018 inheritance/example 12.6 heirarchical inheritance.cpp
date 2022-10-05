//Example 12.6 :- heirarchical inheritance :- If more than one class is inherited from the base class,it's known as heorarchical inheriatnce.
// NOTE :- With the help of heirarchiical inheritance we can distribute the property f one class into many classes.

#include<iostream>
using namespace std;

class B
{
	protected :
		int x,y;
	public :
		void assign()
		{
			x=10;y=20;
		}
};
class D1 : public B
{
	int s;
	public :
		void add ()
		{
			s = x + y;
			cout<<"x + y = "<<s<<endl;
		}
};
class D2 : public B
{
	int t;
	public :
		void sub()
		{
			t =  x - y ;
			cout<<"x - y = "<<t<<endl;
		}
};
class D3 : public B
{
	int m;
	public :
		void mul()
		{
			m = x* y;
			cout<<"x * y = "<<m<<endl;
		}
};

int main()
{
	D1 d1;
	D2 d2;
	D3 d3;
	d1.assign();
	
	d1.add();
	d2.assign();
	
	d2.sub();
	d3.assign();
	d3.mul();
}
