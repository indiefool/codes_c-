//PROTECTED INHERITANCE :- IF THE VISIBILTY MODE(ALSO KNOWN AS DERIVATION TYPE) FOR THE DERIVED CLASS IS PROTECTED THEN INHERITANCE IS KNOWN AS PROTECTED INHERITANCE.
#include<iostream>
using namespace std;

class B
{
	private :
		int x;
	protected :
		int y;
	public :
		
		void getdata();
		void showdata();
		
};
class D : protected B
{
	private :
		int z;
	public :
		void getz();
	    void outz();
};
void B :: getdata()
{
	cout<<"Enter x\n";
	cin>>x;
	cout<<"Enter y\n";
	cin>>y;
	
}
void B :: showdata()
{
	cout<<"x ="<<x<<endl;
	cout<<"y = "<<y<<endl;
	
}
void D :: getz()
{
	cout<<"Enter z :";
	cin>>z;
	
}
void D :: outz()
{
	cout<< "z = "<<z;
}
int main()
{
	D d1;
	
	d1.getz();
	
	d1.outz();
}
