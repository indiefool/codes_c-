// Write a program which reads the bio-data of four students and then print it
#include<iostream>
using namespace std;
class stud
{
	char name[80];
	char address [90];
	int phone;
	
	public :
		void getdata();
		void showdata();
		
};
void stud :: getdata ()
{
	cout<<"Enter the student name\n";
	cin>>name;
	cout<<"Enter the address\n";
	cin>>address;
	cout<<"Enter the phone number\n";
	cin>>phone;
}
void stud :: showdata()
{
	cout<<name<<endl;
	cout<<address<<endl;
	cout<<phone<<endl;
}
int main ()
{
	stud s[4];
	int i;
	for(i=0;i<4;i++)
	{
	cout<<"Enter the bio-data of student "<<i + 1<<endl;
	s[i].getdata();	
	}
		for(i=0;i<4;i++)
	{
	cout<<"The bio-data of student "<<i + 1<<endl;
	s[i].showdata();	
	}
	
}
