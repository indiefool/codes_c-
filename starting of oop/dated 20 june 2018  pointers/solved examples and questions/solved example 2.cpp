/* Write a program to declare a class person with two variables name and age.
Function greater takes single argument and return object with greater age else the this pointer returns refrence of the object which is used to invoke the greater function.

*/
#include<iostream>
#include<string.h>
using namespace std;

class person
{
	char name[80];
	int age;
	
	public :
		person()
		{
		}
		person(char *n,int a)
		{
			strcpy(name,n);
			age = a;
		}
		person& greater(person& p) // pass by refrence
		{
			if(p.age>age)
			return p;
			else
			return *this;
		}
		void  output()
		{
			cout<<"name is "<<name<<endl;
			cout<<age<<endl;
		}
 };
 int main()
 {
 	person s1("prashant",19);
 	person s2("rahul",20);
 	person s3;
 	s3 = s1.greater(s2);
 	s3.output();
  } 
