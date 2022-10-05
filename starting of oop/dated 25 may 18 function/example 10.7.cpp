// object as function argument
/* Write a program which reads two complex number and then calcculate sum of these two */

#include<iostream>
using namespace std;
class complex
{
	float real,imag;
	
	public :
		void getdata();
		void sum(complex c1,complex c2);
		void showdata();
};
void complex :: getdata()
{
	cout<<"Enter the real part\n";
	cin>>real;
	cout<<"Enter the imaginary part\n";
	cin>>imag;
	
}
void complex :: sum(complex c1,complex c2)
{
	real=c1.real + c2.real;
	imag = c1.imag + c2.imag;
	
}
void complex :: showdata()
{
	cout<<real<<" + i"<<imag;
}
int main()
{
	complex x,y,z;
	cout<<"Enter the first complex number\n";
	x.getdata();
	cout<<"Enter the second complex number\n";
	y.getdata();
	
	z.sum(x,y);
	
	cout<<"The sum of the entered complex number is ";
	z.showdata();
}
