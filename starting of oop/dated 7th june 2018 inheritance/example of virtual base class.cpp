//Example of Virtual base class .
/*Use of virutal keyword to make the common class as virtual base class to avoid duplication of inherited member due to multiple paths is also sometimes known as virtual inheritance.
(or use of virtual keyword in inheritance is called virtual inheritance). i am not that  sure about the definition so check this from a book.
*/
//NOTE:-When a class is made virtual base class ,C++ takes necessaary care to see that only one copy to that base class is inherited ,
//regardless of how many inheritence paths exist between the virtual base class and derived class.
#include<iostream>
using namespace std;

class A
{
	int a;
	public :
		void dispa()
		{
			int a = 10;
			cout<<"Class A "<<a<<endl;
		}
};
class B : public virtual  A
{
	int b;
	public :
		void dispb()
		{
			int b = 20;
			cout<<"Class B "<<b<<endl;
		}
};
class C : public  virtual A
{
	int c;
	public :
		void dispc()
		{
			int c = 30;
			cout<<"Class C "<<c<<endl;
		}
};
class D :public B,public C
{
	int d;
	public :
		void dispd()
		{
			d = 40;
			cout<<"Class D "<<d<<endl;
		}
};
int main()
{
	D obj;
	obj.dispa();
	obj.dispb();
	obj.dispc();
	obj.dispd();
}

