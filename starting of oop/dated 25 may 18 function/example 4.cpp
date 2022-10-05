// Write a program which reads two complex number stored in different object and then print
#include<iostream>
using namespace std;

class complex
{
	float real,imaginary;
	public :
		void getdata();
		void showdata();
};
void complex :: getdata()
{
	cout<<"Enter the real part\n";
	cin>>real;
	cout<<"Enter the imaginary part\n";
	cin>>imaginary;
}
void complex :: showdata()
{
	cout<<"The complex number is "<<real<<" + i"<<imaginary;
}
int main()
{
	complex c1,c2;
	cout<<"Enter the first complex no. number\n";
	c1.getdata();
	
	cout<<"Enter the second complex no. number\n";
	c2.getdata();
	
	cout<<"complex number :\n";
	c1.showdata();
	cout<<endl;
	c2.showdata();
}

