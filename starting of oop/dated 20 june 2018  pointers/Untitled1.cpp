#include<iostream>
using namespace std;

int main()
{
	int x[5]={5,22,3,66,8},*p1;
	cout<<"Enter the value of x \n";
	
	p1 = x;
	p1 = p1;
	(*p1)--;
	cout<<"p1 = "<<*p1<<endl;
	
	
}
