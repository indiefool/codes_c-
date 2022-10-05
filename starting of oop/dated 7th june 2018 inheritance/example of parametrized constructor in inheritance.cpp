//example of parametrised constructor in inheritance.

/* Derived constructor (Arg1,Arg2,.....Argn) : Base1(Arg1),Base2(Arg2)
{

   D = Argn;
 
}
*/
//this is an example of multiple inheritance.

#include<iostream>
using namespace std;

class A
{
	int a;
	
	public :
		A(int x)
		{
			a =x;
			cout<<"A class constructor initialized\n";
		}
		void dispa()
		{
			cout<<"Value of A "<<a<<endl;
			
		}
};
class B
{
	int b;
	
	public :
		B(int y)
		{
			b =y;
			cout<<"B class constructor initialized\n";
		}
		void dispb()
		{
			cout<<"Value of B "<<b<<endl;
		}
};
class C :public B,public A // iss line main(multiple inheritance main) jo class  pahle likha jayega uska constructor pahle initialise hoga . since yahan pe pahle B ko likha gaya hai to wo A constructor se pahle execute  hoga.
{
	int m;
	public :
		C(int x,int y,int z) : A(x),B(y)
		{
			m = z;
			cout<<"C class constructor initialied\n";
			
		}
		void dispm()
		{
			cout<<"Value of m "<<m<<endl;
		}
		
};
int main()
{
	C obj(10,20,30);
	obj.dispa();
	obj.dispb();
	obj.dispm();
	return 0;
}

//this is an example of multilevel inheritance.
/*
#include<iostream>
using namespace std;

class A
{
	int a;
	
	public :
		A(int x)
		{
			a =x;
			cout<<"A class constructor initialized\n";
		}
		void dispa()
		{
			cout<<"Value of A "<<a<<endl;
			
		}
};
class B : public A
{
	int b;
	
	public :
		B(int y,int x):A(x)
		{
			b =y;
			cout<<"B class constructor initialized\n";
		}
		void dispb()
		{
			cout<<"Value of B "<<b<<endl;
		}
};
class C :public B
{
	int m;
	public :
		C(int x,int y,int z) : B(y,x)
		{
			m = z;
			cout<<"C class constructor initialied\n";
			
		}
		void dispm()
		{
			cout<<"Value of m "<<m<<endl;
		}
		
};
int main()
{
	C obj(12,15,889);
	obj.dispa();
	obj.dispb();
	obj.dispm();
}*/
