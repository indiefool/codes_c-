// write a program which reads the sum of two numbers and then prints the sum

#include<iostream>
using namespace std;
class sum
{
	int a,b;
	
	public :
		void getdata();
		void showdata();
};
void sum::getdata()
{
	cout<<"Enter the values of a and b\n";
	cin>>a>>b;
	
}
void sum::showdata()
{
	int sum = a+b;
	cout<<"The sum  is "<<sum;
}
int main()
{
	sum s1;
	s1.getdata();
	s1.showdata();
}
