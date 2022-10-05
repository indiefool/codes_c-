/* write a program to demonstrate the run-time binding of the member function of a class.
The same message is given to access the derived class member functions from the array of pointers.As the functions are declared as virtual,the c++ compiler invokes the 
dynamic binding.
*/

#include<iostream>
using namespace std;

class base
{
	public :
		virtual void display()
		{
			cout<<"one"<<"\n";
		}
};
class derive : public base
{
	public :
		virtual void display()
		{
			cout<<"two\n";
		}
};
class deriveb : public base
{
	public :
		virtual void display()
		{
			cout<<"Three\n";
		}
};
int main()
{
	//define three objects
	base a;
	derive c;
	deriveb b;
	
	base* ptr[3]; //define an array of pointers to base ;
	ptr[0] = &a;
	ptr[1] = &c;
	ptr[2] = &b;
	
	for(int i = 0;i<=2;i++)
	{
		ptr[i]->display(); //same message for all objects
	}
}

