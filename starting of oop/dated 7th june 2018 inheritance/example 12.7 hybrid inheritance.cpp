//Example of hybrid inheritance :- if e apply more than one type of inhritance to design a problem then that is known as hybrid inheritance.

#include<iostream>
using namespace std;

class B1
{
	protected :
		int x;
	public :
		void assignx()
		{
			x = 20;
		}
};
class D1 : public B1
{
	protected :
		int y;
	public :
		void assigny()
		{
			y = 40;
		}
};
class D2 : public D1
{
	protected :
		int z;
	public :
		void assignz()
		{
			z = 60;
		}
};
class B2
{
	protected :
		int k;
	public :
		void assignk()
		{
			k = 80;
		}
};
class D3 : public B2,public D2
{
	private :
		int total;
	public :
		void output ()
		{
			total = x + y + z + k;
			cout<<"x + y + z + k = "<<total<<endl;
		}
};
int main()
{
	D3 s;
	s.assignx();
	s.assigny();
	s.assignz();
	s.assignk();
	s.output();
}

