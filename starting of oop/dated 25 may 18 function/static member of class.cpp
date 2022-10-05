// static member of class
/*   if we create the data member of class as static then the properties of that is :
     1.  It is initialised to zero and only once when the first object of its class is created.
     2.  Only one copy of that member is create for the entire class and is shared by all the objects of the class.
     3.  It is accessible only within class ,but its lifetime is the entire program.
     4.
     The type and scope of each static member must be defined outside the class .
       Eg :- int abc :: c;  //Here value of c is automatcally initialised to 0;
                 OR
             int abc :: c=10;  //Here value of c is 10;
*/
#include<iostream>
using namespace std;

class counter
{
	int n;
	static int count;
	
	public :
		void getdata(int num)
		{
			n = num;
			count++;
		}
		void showcount()
		{
			cout<<"count :"<<count<<endl;
		}
		
};
int counter :: count;

int main()
{
	counter c1,c2,c3,c4;
	c1.showcount();
	c2.showcount();
	c3.showcount();
	c4.showcount();
	c1.getdata( 20);
	c2.getdata(40);
	c3.getdata(60);
	c4.getdata(80);
	cout<<"Value of count after calling get data function\n";
	c1.showcount();
	c2.showcount();
	c3.showcount();
	c4.showcount();
}


