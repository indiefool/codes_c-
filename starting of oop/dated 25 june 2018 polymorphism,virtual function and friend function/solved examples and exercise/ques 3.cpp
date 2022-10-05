/*Write a program which calculate the arc of circle,area of rectangle,area of triangle using virtual function.
*/
#include<iostream>
using namespace std;

class arc
{
	public :
		virtual void area(int z,float theta)
		{
		   int r = z;
		   float p = theta;
		
		   float arc = 2*3.14*r*(p/360);
		   cout<<"The arc of circle is "<<arc<<endl;
		}
		
		
};
class rec : public arc
{
	public :
		void area(int length,int breadth)
		{
			float a = length*breadth;
			cout<<"area of rectangle is "<<a<<endl;
		}
};
class triangle : public rec
{
	public :
		void area(int base,int height)
		{
			float a = (1/2.0)*base*height;
			cout<<"area of triangle is "<<a<<endl;
		}
};
int main()
{
	arc p;
	p.area(22,66);
	rec v;
	v.area(5,6);
	triangle t;
	t.area(25,55);
	
}
