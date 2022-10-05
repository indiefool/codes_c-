// example 11.3:-
            //   write a program, which prints the object number whenever we create an object 
            
#include<iostream>
using namespace std;

class counter 
{
	static int count;
	public :
		counter ()
		{
			count ++;
			cout<<"Object number is :"<<count<<endl;
		}
		
};
int counter :: count;
int main()
{
	cout<<"We are creating C1 :"<<endl;
	counter C1;
	cout<<"We are creating C2 :"<<endl;
	counter C2;
	
}
