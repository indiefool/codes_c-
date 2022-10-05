// Write a program which reads two complex numbers and then perform multiplication of these two
/*
Eg :-
      if  the complex number are a1 + ib1 and a2 + ib2 then multiplivation is 
            ( a1 + ib1)*(a2 +ib2)
            -> a1a2 - b1b2 + i(a1b2 + b1a2)
            
            */
            
#include<iostream>
using namespace std;
struct complex
{
	float real;
	float imaginary;
} ;
int main()
{
	complex a,b,c;
	complex mul(complex a,complex b);
	cout<<"Enter the 1st complex number real and imaginary part\n";
	cin>>a.real>>a.imaginary;
	cout<<"Enter the 2nd complex number real and imaginary part\n";
	cin>>b.real>>b.imaginary;
	c=mul (a,b);
	cout<<"Number obtained after multiplication of the abover two complex number is :";
	cout<<c.real<<" + i"<<c.imaginary;
	return 0;
}
complex mul(complex a,complex b)
{
	complex c;
	c.real=a.real*b.real-(b.imaginary*a.imaginary);
	c.imaginary=a.real*b.imaginary + b.real*a.imaginary;
	return c;
}
		              
