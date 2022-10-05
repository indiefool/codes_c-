//STATIC MEMBER FUNCTION
/* if a member function is declared static then that has the following properties :
   1.  A static function can access to only other static member (static member data and static member function )declare in the same class.
   2.  The calling procedure of static member function is as follows:
                     
					 class-name :: function-name;
                     Eg :-
                     abc :: showdata();
*/
#include<iostream>
using namespace std;

class counter
{
	int a;
	static int count;
	
	public :
		void assign()
		{
			++count;
			a=count;
			
		}
	void output ()
	{
		cout<<"A ="<<a<<endl;	
	}
	static void outputc()
	{
		cout<<"count  :"<<count<<endl;
	}
};
int counter :: count;
int main()
{
	counter c1,c2,c3,c4;
	
	counter :: outputc();
	c1.assign();
	c2.assign();
	c3.assign();
	c4.assign();
	counter :: outputc();
	c1.output();
	c2.output();
	c3.output();
	c4.output();
	
	
}

