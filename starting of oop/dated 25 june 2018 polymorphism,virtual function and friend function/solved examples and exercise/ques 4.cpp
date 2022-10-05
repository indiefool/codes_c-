/* Write a programwhich calculates the following function

d)  f(x) = 8x^5 + 7x^4 + 3x^3 + 5;
*/
#include<iostream>
#include<math.h>
using namespace std;

class func
{
	float x;
	
	public :
		void showdata(float d)
		{
			x = d;
			x = 8*pow(x,5) + 7*pow(x,4) + 3*pow(x,3) + 5;
			cout<<"The value of the function is "<<x<<endl;
		}
};
int main()
{
	func p;
	p.showdata(1.1);
}


