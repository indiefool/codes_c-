/*Write a program to demonstrate how to define virtual functions with inline code substitution for runtime binding of the member functions of the class. The programs 
are student and physique. The functions getdata() and display() are declared virtual inline in the class student and sanctions the getdata() and display() functions
of class physique are invoked with the help of pointer in the main function.
*/

#include<iostream>
using namespace std;

class student
{
	int rollno;
	char name[20];
	
	public :
		virtual inline void getdata();
		virtual inline void display();
};
class physique :public student
{
	float height,weight;
	
	public :
		void getdata();
		void display();
};
inline void student ::getdata()
{
	cout<<"enter roll number\n";
	cin>>rollno;
	cout<<"enter name\n";
	cin>>name;
}
inline void student :: display()
{
	cout<<"entered details for student : roll number = "<<rollno<<" and name is "<<name<<endl;
}
void physique :: getdata()
{
	cout<<"Enter the height of the student\n";
	cin>>height;
	cout<<"enter the weight of the student\n";
	cin>>weight;
}
void physique :: display()
{
	cout<<"height and weight of the student is "<<endl;
	cout<<height<<" "<<weight<<endl;
}
int main()
{
	student* ptr;
	physique obj;
	ptr = &obj;
	ptr->getdata();
	ptr->display();
}
