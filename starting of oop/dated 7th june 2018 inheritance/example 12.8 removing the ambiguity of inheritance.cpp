//Example relaated with ambiguity of inhertance

#include<iostream>
using namespace std;

class B1
{
	private :
		int x;
    public :
    	void getdata()
    	{
    		cout<<"Enter x "<<endl;
    		cin>>x;
		}
};
class B2
{
	private :
		int x;
	public :
		void getdata()
		{
			cout<<"Enter x"<<endl;
			cin>>x;
			cout<<x<<endl;
		}
};
class D : public B1,public B2
{
	private :
		int n;
	
};

int main()
{
	D obj;
	obj.B1 :: getdata();//This statement calls getdata() of B1 class.
	obj.B2 :: getdata();//This statement calls getdata() of B2 class.
}
