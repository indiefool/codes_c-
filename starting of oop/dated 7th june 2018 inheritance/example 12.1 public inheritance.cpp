//PUBLIC INHERITANCE :- IF THE VISIBILTY MODE(ALSO KNOWN AS DERIVATION TYPE) FOR THE DERIVED CLASS IS PUBLIC THEN INHERITANCE IS KNOWN AS PUBLIC INHERITANCE.
#include<iostream>
using namespace std;

class B
{
	private :
		int x;
	protected :
		int y;
	public :
		int z;
		void getdata();
		void showdata();
		
};
class D : public B
{
	private :
		int k;
	public :
		void getk();
	    void output();
};
void B :: getdata()
{
	cout<<"Enter first number\n";
	cin>>x;
	cout<<"Enter second number\n";
	cin>>y;
	cout<<"Enter thord number\n";
	cin>>z;
}
void B :: showdata()
{
	cout<<"x ="<<x<<endl;
	cout<<"y = "<<y<<endl;
	cout<<"Z = "<<z<<endl;
}
void D :: getk()
{
	cout<<"Enter k :";
	cin>>k;
	
}
void D :: output()
{
	cout<< "y + z + k = "<<y+z+k;
}
int main()
{
	D d1;
	d1.getdata();
	d1.getk();
	d1.showdata();
	d1.output();
}



//Remark :- in this example x is a private member of class B and cannot be inherited but object of D are able to access it through an inherited member function
// of B (i.e., through getdata() and showdata() od class B).

