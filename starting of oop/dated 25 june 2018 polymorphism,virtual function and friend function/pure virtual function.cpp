//  Example of pure virtual function

#include<iostream>
using namespace std;

class b
{
	public :
		virtual void show() = 0; // pure virtual function
		
};
class d1 : public b
{
	public :
		void show()
		{
			cout<<"This is in class d1"<<endl;
		}
};
class d2 : public b
{
	public :
		void show()
		{
			cout<<"This is in class d2"<<endl;
		}
};
int main()
{
	b* p;
	d1 obj1;
	d2 obj2;
	

	p = &obj1;
	p->show();
	p = &obj2;
	p->show();
}
