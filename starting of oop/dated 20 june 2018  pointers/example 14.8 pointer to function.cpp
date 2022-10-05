// pointer to function
#include<iostream>
using namespace std;

int main()
{
	float add(float,float);
	float a,b,s;
	
	float(*p)(float,float);
	p = add; // you can also write p = &add;
	a = 20.5;
	b = 10.3;
	s= (*p)(a,b); // this is explicit method. implicit method will be s = p(a,b);  
	
	/*NOTE :- if the brackets were not present i.e., s = *p(a,b) then c++ compiler interprets p as a function which returns a pointer to float.*/  
	cout<<"s = "<<s<<endl;
}
float add(float a1,float b1)
{
	float sum;
	sum = a1 + b1; 
	return sum;
}
