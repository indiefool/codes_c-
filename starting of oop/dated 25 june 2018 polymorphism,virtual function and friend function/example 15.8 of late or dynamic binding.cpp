/* Late Binding :- late binding means selecting function during exection.Though late binding requires 
some overhead , it provides increased power and flexibility .The late
binding is implemented through virtual function as a result we have to declare an object of a class
either as a pointer to a class or refrence to a class.

*/

#include<iostream>
using namespace std;

class base
{
	int x;
	float y;
	public :
		virtual void display()
		{
			cout<<"base class display\n";
		}
		int sum()
		{
			cout<<"base class sum\n";
		}
};
class derived :public base
{
	int x;
	float y;
	public :
		
		void display(){
			cout<<"derived class display\n";
		}
		
		int sum()
		{
			cout<<"derived class sum\n";
		}
};
int main()
{ 
	base *ptr;
	derived objd;
	ptr = &objd;
	ptr->display(); // run time binding as virtual keyword is used for this.
	ptr->sum(); // compile time binding or static binding.
}
