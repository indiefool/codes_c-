// This is an example of function template.

#include<iostream>
using namespace std;

template <class t>

void swap(t &a,t &b);
void swap(float &a1,float &b1); 
void swap(char &a1,char &b1);

int main()
{
	int i1,i2;
	float f1,f2;
	char c1,c2;
	
	cout<<"Enter first integer";
	cin>>i1;
	cout<<"Enter second integer";
	cin>>i2;
		cout<<"Enter first float";
	cin>>f1;
	cout<<"Enter second float";
	cin>>f2;
		cout<<"Enter first character";
	cin>>c1;
	cout<<"Enter second character";
	cin>>c2;
	
	swap(i1,i2);
	cout<<"After swapping , "<endl;
	cout<<"First integer is "<<i1<<endl;
	cout<<"Second integer is "<<i2<<endl;
	
	
	
	
	
}

