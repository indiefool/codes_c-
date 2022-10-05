/* ques 3 - write a program to create objects of class integer and overload the + operator to add two object value */

#include<iostream>
using namespace std;

class integer
{
	private :
		int val;
	public :
		integer();
		integer(int one);
		integer operator + (integer objb);
		void disp();
};
integer :: integer ()
{
	val = 0;
}
integer :: integer (int one)
{
	val =one;
}
integer integer :: operator +(integer objb)
{
	integer objsum;
	objsum.val = val + objb.val;
	return(objsum);
}
void integer :: disp()
{
	cout<<"value = "<<val<<endl;
}
int main()
{
	integer obj1 (11);
	integer obj2(22);
	integer objsum;
	objsum = obj1 + obj2;
	obj1.disp();
	obj2.disp();
	objsum.disp();
}


/*  Example program made by me.
class integer
{
	int x;
	
	public :
		void getdata()
	   {
	   	cout<<"Enter the value of x \n";
	   	cin>>x;
	   	
	   }
	   integer operator +(integer c1)
	   {
	   	 c1.x = x + c1.x;
	   	  return c1;
	   }
	   void showdata()
	   {
	   	cout<<x<<endl;
	   }
};
int main()
{
	integer b;
	b.getdata();
	integer vv;
	vv.getdata();
	b = b + vv;
	b.showdata();
}
*/
