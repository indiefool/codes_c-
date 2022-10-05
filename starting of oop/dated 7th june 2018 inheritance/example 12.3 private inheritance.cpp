//PRIVATE INHERITANCE :- IF THE VISIBILTY MODE(ALSO KNOWN AS DERIVATION TYPE) FOR THE DERIVED CLASS IS PRIVATE THEN INHERITANCE IS KNOWN AS PRIVATE INHERITANCE.
#include<iostream>
using namespace std;
class B
{
	private :
		int x;
	protected :
		int y;
	public :
		void getadata()
		{
			cin>>x>>y;
			
		}
};
class D : private B
{
	private :
		int z;
    public :
    	void assign()
    	{
    		z =30;
    		y =40;
    		
		}
	void output()
	{
		int f =y+z;
		cout<<"y+z ="<<f;
	}
};
int main()
{
	D d1;
	d1.assign();
	d1.output();
}

