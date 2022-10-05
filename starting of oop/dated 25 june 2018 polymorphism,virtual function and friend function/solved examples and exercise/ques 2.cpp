/* Write a program to implement hierarchy in class shape,circle,rectangle,square.The functions and shape is an abstract class.
*/


#include<iostream>
using namespace std;
class shape
{
public:
     virtual void show() = 0; // pure virtual function is needed for making an abstract class.
	
};
class circle : public shape
{
	public:
     void show()
	 {
	 	cout<<"This is class circle\n";
		 }
};
class rectangle : public circle
{
	public:
     void show()
	 {
	 	cout<<"This is class rectangle\n";
		 }
};
class square : public rectangle
{
	public:
     void show()
	 {
	 	cout<<"This is class square\n";
		 }
};
int main()
{
	shape* bta;
	circle c;
	rectangle r;
	square s;
	bta = &c;
	bta->show();
	bta = &r;
	bta->show();
	bta = &s;
	bta->show();
}
