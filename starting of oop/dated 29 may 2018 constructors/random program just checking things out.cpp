// constructor with default argument
// This method is used to initialise object with user defined papameter at the time of creation.
// It is possible to define a constructor with default argument like in normal function.

#include<iostream>
using namespace std;

class complex
{
	int x,y;
	public :
		complex (int a, int b = 0)
		{
			x = a;
			y = b;
		}
		void showtime()
		{
			cout<<"value of x = "<<x<<endl;
			cout<<"value of y = "<<y;
		}
		
};
int main()
{
	complex c1(5);
	
	c1.showtime();
}
