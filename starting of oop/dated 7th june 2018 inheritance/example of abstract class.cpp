//Example of abstract class .
/*ABSTRACT CLASS :- A class is called abstract class if it is only used as base class for other classes .
Abstract class is not used to create objects but only as a base class .
*/
#include<iostream>
using namespace std;

class biodata
{
	protected :
		char name [20];
		char semester [20];
		char branch [10];
		int rn;
	public :
		void getbio()
		{
			cout<<"Enter name :";
			cin>>name;
			cout<<"Enter semester : ";
			cin>>semester;
			cout<<"Enter branch :";
			cin>>branch;
			cout<<"Enter roll number :";
			cin>>rn;
		}
		void showbio()
		{
			cout<<"Name :"<<name<<endl;
			cout<<"Semester "<<semester<<endl;
			cout<<"Branch "<<branch<<endl;
			cout<<"Roll no. :"<<rn<<endl;
		}
};
class sessional1 : public virtual biodata
{
	protected :
		float total1;
    public :
    	void gettotal1()
    	{
    		cout<<"Enter marks in sessional 1 : ";
    		cin>>total1;
		}
		void showtotal1()
		{
			cout<<"Marks in sessional 1 = ";
			cout<<total1<<endl;
		}
};
class sessional2 : public virtual biodata
{
	protected :
		float total2;
	public :
		void gettotal2()
		{
			cout<<"Enter marks in sessional 2 : ";
			cin>>total2;
		}
		void showtotal2()
		{
			cout<<"Marks in sessional 2 = ";
			cout<<total2<<endl;
		}
};
class result : public sessional1,public sessional2
{
	float total;
	public :
		output()
		{
			total = total1 + total2;
			showbio();
			showtotal1();
			showtotal2();
			cout<<"Total marks = "<<total<<endl;
		}
};

int main()
{
	result r;
	r.getbio();
	r.gettotal1();
	r.gettotal2();
	cout<<"The details of the student is : "<<endl;
	r.output();
}
// Note :- In the above program the class biodata is abstract class .The virtual concept has been used too.
