//Example 12.4 :- Example of multiple inheritace .
//NOTE:- multiple inheritance means a class is derived from multiple base class .

#include<iostream>
#include<string>
using namespace std;
class bio
{
	string name;
	char semester[20];
	int age;
	int rn;
	public :
		void getbio();
		void showbio();
		
};
class marks
{
	char sub[10];
	float total;
	public :
		void getm();
		void showm();
};
class final : public bio,public marks
{
	long int phno;
	public :
		void getph();
		void showph();
};
void bio :: getbio()
{
	cout<<"Enter name :";
	cin>>name;
	cout<<"Enter semester :";
	cin>>semester;
	cout<<"Enter age :";
	cin>>age;
	cout<<"Enter rn";
	cin>>rn; 
}
void bio :: showbio()
{
	cout<<"Name :"<<name<<endl;
	cout<<"Semester :"<<semester<<endl;
	cout<<"Age :"<<age<<endl;
	cout<<"Rn :"<<rn<<endl;
}
void marks :: getm()
{
	cout<<"Enter the subject name :";cin>>sub;
	cout<<"Enter marks :";cin>>total;
}
void marks :: showm()
{
	cout<<"Subject name :"<<sub<<endl;
	cout<<"Marks are :"<<total<<endl;
}
void final :: getph()
{
	cout<<"Enter phone no. :";cin>>phno;
}
void final :: showph()
{
	cout<<"phone no. :"<<phno<<endl;
}
int main()
{
	final f;
	f.getbio();
	f.getm();
	f.getph();
	f.showbio();
	f.showm();
	f.showph();
}
