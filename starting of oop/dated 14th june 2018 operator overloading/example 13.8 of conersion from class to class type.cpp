/*CONVERSION FROM ONE CLASS TYPE TO ANOTHER CLASS TYPE CAN BE CARRIED OUT BY EITHER 
 1. CONSTRUCTOR .
 2. CASTING OPERATOR.
*/ 
#include<iostream>
#include<math.h>
using namespace std;

class polar
{
	float rd;
	float ang;
	public :
		polar()
		{
			rd = 0.0;
			ang = 0.0;
		}
		polar (float r,float i)
		{
			rd =r;
			ang = i;
		}
		float getrd()
		{
			return(rd);
		}
		float getang()
		{
			return (ang);
		}
		void showpolar()
		{
			cout<<rd<<" , "<<ang<<endl;
		}
};
class rec
{
	float x,y;
	
	public :
		rec()
		{
			x = 0.0;
			y = 0.0;
		}
		rec(polar p)
		{
			float r = p.getrd();
			float a = p.getang();
			x = r * cos(a);
			y = r * sin(a);
		}

void showrec()
{
	cout<<x<<","<<y<<endl;
}
};

int main()
{
	rec r1;
	polar p1(2.0,90.0);
	r1 = p1;
	cout<<"polar co. : "<<endl;
	p1.showpolar();
	cout<<"rec co. : "<<endl;
	r1.showrec();
}


/* EXAMPLE USING CONSTRUCTOR.
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
		int getq()
		{
			return q;
		}
		int getr()
		{
			return r;
		}
};
class item
{
	int a,b;
	public :
		void showdata()
		{
			cout<<a<<" and "<<b<<endl;
		}
		item()
		{
			
		}
		item(product c1)
		{
			a = c1.getq();
			b = c1.getr();
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
}*/
