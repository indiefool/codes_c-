#include<iostream>
using namespace std;

class inte
{
	protected :
	int a;
	int b;
	
	public :
		void val()
		{
			cout<<"ENTER THE VALUES OF A AND B\n";
			cin>>a>>b;
		}
		void add()
		{
			int p;
			p=a+b;
			cout<<"the sum of "<<a<<" and "<<b<<" is "<<p<<endl;
		}
		void sub()
		{
			int q;
			q=a-b;
			cout<<"the subtraction of "<<a<<" and "<<b<<" is "<<q<<endl;
		}
};
class inter : public inte
{
	public :
		void mul()
		{
			int r;
			r=a*b;
			cout<<"the multiplication of "<<a<<" and "<<b<<" is "<<r<<endl;
		}
		void div()
		{
			float s;
			s= (float)a/b;
			cout<<"the division of "<<a<<" and "<<b<<" is "<<s<<endl;
		}
};
int main()
{
	inter bc;
	bc.val();
	bc.add();
	bc.sub();
	bc.mul();
	bc.div();
	
}
