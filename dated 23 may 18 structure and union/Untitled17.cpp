#include<iostream>
#include<stdio.h>
using namespace std;
struct stud 
{ 
char name[100];
int marks_in_maths;
char grade[1];	
};
 
int main()
{
	stud n[3];
	int i;
	
	for(i=0;i<3;i++)
	{
		cout<<"Enter the " <<i+1<<" student details"<<endl;
		cout<<"Enter student name\n";
		cin>> n[i].name;
		cout<<"Enter the student marks in maths\n";
		cin>> n [i].marks_in_maths;
		cout<<"Enter the grade in it\n";
		cin>>n[i].grade;
		
	}
	
	for(i=0;i<3;i++)
	{
		cout<<"The details of " <<i+1<<" student is"<<endl;
		cout<<"student name\n";
		cout<<n[i].name<<endl;
		cout<<"student marks in maths\n";
		cout<<n[i].marks_in_maths<<endl;
		cout<<"the grade in it\n";
		cout<<n[i].grade<<endl;
		
	}
return 0;
}
