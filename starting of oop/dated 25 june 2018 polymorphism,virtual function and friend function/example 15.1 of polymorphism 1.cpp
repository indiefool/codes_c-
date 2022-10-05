//The following program implements the concept of polymorphism through function overloading.
#include<iostream>
using namespace std;

void area(float r1);
void area(float l1,float b1);
int main()
{
	float r,l,b;
	cout<<"Enter the radius\n";
	cin>>r;
	cout<<"Enter the value of length and breadth\n";
	cin>>l>>b;
	cout<<"Area of the circle is "<<endl;
	area(r);
	cout<<"Area of the rectangle is "<<endl;
	area(l,b);
	return 0;
}
void area(float r1)
{
	float a = 3.14*r1*r1;
	cout<<"Area = "<<a<<endl;
}
void area(float l1,float b1)
{
	float a = l1*b1;
	cout<<"Area = "<<a<<endl;
}
/* IN THE ABOVE PROGRAM TWO FUNCTIONS HAVE SAMEE NAME BUT C++ COMPILER DIFFERENTIATE THESE TWO BY ARGUMENT .
  
  NOTE :- IF ANY PROGRAM HAS TWO FUNCTIONS AND BOTH HAVE SAME NAME AND NUMBER OF ARGUMENTS THEN COMPILER DIFFERENTIATE THESE BY TYPE OF ARGUMENT. 
