// structure within structure
#include<iostream>
using namespace std;
struct date
{
	int day;
	char monthname [20];
	int year;
};
struct biodata
{
	char name[80];
	date dob;
};
int main()
{
	biodata student;
	cout<<"Enter the name:\n";
	gets(student.name);
	cout<<"Enter the day of birth\n";
	cin>>student.dob.day;
	cout<<"Enter the month \n";
	cin>>(student.dob.monthname);
	cout << "Enter year of birth\n";
	cin>>student.dob.year;
	
	
	
	
	cout<<endl;
	cout<<"The biodata is\n";
	cout<<"Name :"<<student.name<<endl;
	cout<<"Date of birth :"<<endl;
	cout<<student.dob.day<<"/"<<student.dob.monthname<<"/"<<student.dob.year;
	
	
}

