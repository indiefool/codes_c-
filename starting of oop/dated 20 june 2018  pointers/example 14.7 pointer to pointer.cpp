// Pointer to Pointer :- an array of pointer is same as pointer to pointer type.
// synatax is 
//            data-type ** variable-name;
//              Eg :- int **p        where p is pointer which holds the address of the pointer.

#include<iostream>
using namespace std;
int main()
{
	int data,*p1,**p2;
	data = 16;
	
	p1 = &data;
	p2 = &p1;
	
	
	cout<<"data is = "<<data<<endl;
	cout<<"data through p1 is = "<<*p1<<endl;
	cout<<"data through p2 is = "<<**p2<<endl;
}
