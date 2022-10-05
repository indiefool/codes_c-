//Example 14.1 of pointer to structure.
#include<iostream>
#include<string.h>
using namespace std;

struct employee
{
	char name[20];
	int age ;
	long int sal;
};
int main()
{
	void modify(employee *);
	void output(employee);
	
	employee a = {"Rajesh",26,80000};
	modify(&a);
	output(a);
}
void modify(employee *a1)
{
	strcpy(a1->name,"Noopur");
	a1->age = 35;
	a1->sal = 180000;
}
void output(employee a2)
{
	cout<<"Name ="<<a2.name<<endl;
	cout<<"age ="<<a2.age<<endl;
	cout<<"salary ="<<a2.sal<<endl;
}
