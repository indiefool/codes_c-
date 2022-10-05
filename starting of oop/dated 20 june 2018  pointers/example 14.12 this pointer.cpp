// example of this pointer .
  
#include<iostream>
#include<string.h>
using namespace std;

class student
{
	int rn;
	int total;
	char name[30];
	
	public :
		student(int r1,int t1,char *s)
		{
			rn = r1;
			total = t1;
			strcpy(name,s);
			
		}
		student()
		{
			
		}
		void output()
		{
			cout<<"Roll number = "<<rn<<endl;
			cout<<"Total = "<<total<<endl;
			cout<<"Name = "<<name<<endl;
	}
	
	student& topper(student& st) // pass by refrence
        { 
	        if(st.total >total)
	        return st;
	        else
	        return *this;
        }
};  
	
int main()
{
	student s1 (5,450,"Nitin");
	student s2 (6,425,"Dheeraj");
	student s3;
	student s4(7,500,"Sneha");
	s3 = s1.topper(s2);
	cout<<"Topper in s1 and s2 is "<<endl;
	s3.output();
	s3 = s1.topper(s4);
	cout<<"Topper in s1 and s4 is "<<endl;
	s3.output();
}
