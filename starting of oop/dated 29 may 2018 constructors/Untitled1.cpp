// FIRST CONSTRUCTOR PROGRAM

#include<iostream>
using namespace std;
class add
{
   int a,b;
   int c;
   
   public :
   	add()
   	{
   		a=100;
   		b=200;
   		
   		c= a + b;
   		
	}
	void output()
	{
		cout<<c;
	}
	
    
};
int main()
{
    add i1;	// Here constructor gets called
	i1.output();
	
}
