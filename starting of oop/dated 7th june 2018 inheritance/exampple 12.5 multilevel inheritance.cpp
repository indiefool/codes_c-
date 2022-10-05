// Example 12.5 :-
//MULTILEVEL INHERITANCE :- if a class b is deived from class a and another class c is derived from class b ans so on ,
// then this type of inheritance is known as multilevel inheritance. 

#include<iostream>
using namespace std;
class student
{
	protected :
		char name [20];
		int rn;
	public :
		void getdata()
		{
			cout<<"Enter name :";
			cin>>name;
			cout<<"Enter roll no. :";
			cin>>rn;
			
		}
		void showdata()
		{
			cout<<"Name :"<<name<<endl;
			cout<<"Roll no. :"<<rn<<endl;
		}
};
class marks : public student 
{
	protected :
		float sessonal1;
		float sessonal2;
	public :
		void getm()
		{
			cout<<"Enter marks in sessonal 1 :";
			cin>>sessonal1;
			cout<<"Enter the marks in sessonal 2 :";
			cin>>sessonal2;
		}
		void showm()
		{
			cout<<"sessonal 1 ="<<sessonal1<<endl;
			cout<<"sessonal 2 ="<<sessonal2<<endl;
		}
};
class result : public marks
{
	float total;
	public :
		void output()
		{
			total = sessonal1 + sessonal2;
			cout<<"Total marks are :"<<total<<endl;
		}
};
int main()
{
	result s1;
	s1.getdata();
	s1.getm();
	s1.showdata();
	s1.showm();
	s1.output();
}

