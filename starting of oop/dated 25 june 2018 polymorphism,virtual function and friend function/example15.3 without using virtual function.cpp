#include<iostream>
using namespace std;


class B
{
	public :
	        void show()
		   { cout<<"This is class B"<<endl;  // This is class B
			   }	
};
class D1 : public B
{
	public :
		  void show()
		   { cout<<"This is class D1"<<endl;  // This is class D1
			   }
		
};
class D2 : public B
{
	public :
		  void show()
		   { cout<<"This is class D2"<<endl;  // This is class D2
			   }
		
};
int main()
{
	B* p;
	D1 obj1;
	D2 obj2;
	B objbase;
	p = &objbase;
	
	p->show();
	
	p = &obj1;
	
	p->show();
	
	p = &obj2;
	
	p->show();
}

