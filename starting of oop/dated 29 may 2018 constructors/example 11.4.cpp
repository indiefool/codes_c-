// Example 11.4 :-
   // Write ap program which calculate the subtraction of two complex number , a and b when a = 3 + i5 and b = 4 + i5
   
#include<iostream>
using namespace std;
class complex
{
	int x,y;
	public :
		complex (int a)
		{
			x = a ;
		}
		void add(complex c1,complex c2)
		{
			x = c1.x - c2.x;
			y = c1.y - c2.y;
		}
		void show()
		{
			cout<<x<<" + i"<<y<<endl;
		}
	
 }; 
 int main()
 {
 	complex a(3);
 	complex b(4);
 	complex c(0);
 	c.add(a,b);
 	cout<<"a - b is "<<endl;
 	c.show();
 	
 }
