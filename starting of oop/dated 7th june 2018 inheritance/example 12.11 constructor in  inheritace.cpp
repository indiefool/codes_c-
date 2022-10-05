//Example of  default constructor in inheritance.
// NOTE :- If there is no constructor specified in the derived class constructor then derived class will use the appropriate constructor(i.e., no argument constructor) of base class.

#include<iostream>
using namespace std;

class counter1
{
	protected :
		int count;
	public :
		counter1()
		{
			count = 4;
		}
		counter1(int c)
		{
			count = c;			
		}
		void incount()
		{
			count++;
			cout<<"count is "<<count<<endl;
		}
 };
 class counter2 : public counter1
 {
 	public :
 		void decount()
 		{
 			count--;
 			cout<<"count is "<<count<<endl;
		 }
  };
  int main()
  {
  	counter2 c2;
  	c2.decount();
  	c2.decount();
  	c2.incount();
  	
   } 
   /* Note :- When we create object c2 , the default constructor of base class is automatically called and so the count is initialised to 4.
   The derived class does not call the constructor with parameter if in derived class no constructorid specified .
   But if we want to call the base class parametrised constructor then we have to invoke it in derived class parametrised costructor only.
   */
