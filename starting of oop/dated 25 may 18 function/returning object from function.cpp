//returning object from function
#include<iostream>
using namespace std;
class complex
{
	float real;
	float imag;
	public :
		void getdata();
		complex sum(complex c1);
		void showdata();
		
};
void complex :: getdata()
{
	cout<<"Enter the real part\n";
	cin>>real;
	cout<<"Enter the imaginary part\n";
	cin>>imag;
	
}
complex complex :: sum (complex c1)
{
	complex temp;
	temp.real = c1.real + real;
	temp.imag = c1.imag + imag;
	return (temp);
}
void complex :: showdata()
{
	cout<<real<<" + i"<<imag<<endl;
	
}
int main()
{
	complex x,y,z;
	cout<<"Enter first complex number\n";
	x.getdata();
	cout<<"Enter second complex number\n";
	y.getdata();
	
	z = y.sum(x);
	z.showdata();
}
