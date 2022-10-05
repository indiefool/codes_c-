// Example 11.7 :- 
//  Write a program to concatenate two strings .The constructor function initialises the string using constructor function which allocates memory during its creation.
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
/*
class sstring
{
	char *name;
	int length;
	public :
		sstring()
		{
			length = 0;
			name = new char[length + 1];
		}
		sstring(char *s)
        {
	         length = strlen(s);
	         name = new char[length+1];
	         strcpy(name,s);
	         
        }
        void display(void)
        {
        	cout<<"Name :- "<<name;
		}
		void join(string &a,string &b)
		{
			length = a.length + b.length;
			delete name;
			name = new char [length + 1];
			strcpy (name,a.name);
			strcat (name,b.name);
		}
};
int main()
{
//	char firstname;
     
	sstring Fname("ram");
	sstring Mname("Prasad");
	sstring Halfname;
	sstring Fullname;
	Halfname.join(name,name);
	Fulname.join(Halfname,Mname);
	Fname.display();
	Sname.display();
	Halfname.display();
	Fullname.display();
}*/
//MAKING ANOTHER PROGRAM FOR THE DYNAMIC CONSTRUCTOR

class d
{
	int *p;
	int c,z;
	
	public :
	d(int v,int b,int a)
	{
		c = v;
		z = b;
		p = new int;
		*p = a;
		
		}
	void show()
	{
		cout<<c<<" "<<z<<" "<<*p;
		}	
};
int main()
{
	d bus(2,3,4);
	bus.show();
}
