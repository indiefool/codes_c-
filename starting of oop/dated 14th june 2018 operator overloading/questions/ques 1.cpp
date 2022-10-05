/* ques - Write a program to overload unary operator to negate an object.
*/
#include<iostream>
using namespace std;

class val
{
	int x;
	
	public :
		void operator -() // deining operator.
		{
			 x = -x;
		}
		void getdata()
		{
			cout<<"Enter a value\n";
			cin>>x;
		}
		void showdata()
		{
			cout<<"value of x is "<<x;
		}
};
int main()
{
	val c1;
	c1.getdata();
    -c1;
    c1.showdata();
}
