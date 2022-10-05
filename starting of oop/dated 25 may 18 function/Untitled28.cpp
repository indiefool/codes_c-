// example 1
#include<iostream>
using namespace std;
class abc
{
	private :
		int i,f;
	    void idata ();
	public :
		int k;
		void getdata();
	    void showdata();
		
};
	void abc :: getdata()
		{
			cin>>i>>k;
		}
	  
   
   void abc::showdata()
	{
		cout<<"value of k is "<<k<<endl;
		cout<<"value of i is "<<i<<endl;
	}    
int main()
{
	abc s1;
	s1.k=20;
	s1.getdata();
	s1.showdata();
	
	
}
