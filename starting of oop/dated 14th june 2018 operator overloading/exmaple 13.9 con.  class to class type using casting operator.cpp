// EXAMPLE USING CASTING OPERATOR.
//HELPPPPPPPP MEEEEEEEEEEE SOMEBODY THIS PROGRAM IS WRONG.
#include<iostream>
using namespace std;

class item
{
	int a,b;
	public :
		
		void showdata()
		{
			cout<<a<<" and "<<b<<endl;
		}
	
};

class product
{
	int q,r;
	public :
		void getdata(int x, int y)
		{
			q = x;
			r = y;
		}
		void showdata()
		{
			cout<<q<<" and "<<r<<endl;
		}
		
		operator int()
		{
			int m = q;
			int n = r;
			return (m,n);
		}
		
};

int main()
{
	item i1;
	product c1;
    int x,y;
    x =5;y = 2;
	c1.getdata(x,y);
	i1 = c1;
	i1.showdata();
}
