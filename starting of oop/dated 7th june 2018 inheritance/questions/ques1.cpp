#include<iostream>
#include<string>
using namespace std;

class st
{
	string name;
	int roll_no;
	int pho;
	string address;
	
	public :
		void getdata()
		{
			cout<<"Enter name : ";
			cin>>name;
			cout<<"Enter roll number : ";
			cin>>roll_no;
			cout<<"Enter phone number : ";
			cin>>pho;
			cout<<"Enter the address : ";
		    cin>>address;
		}
		void showdata()
		{
			cout<<"Name is  "<<name<<endl;
			cout<<"Roll number = "<<roll_no<<endl;
			cout<<"Phone number = "<<pho<<endl;
			cout<<"address is "<<address<<endl;
		}
};
class details : public st
{
	public:
	int mis1;
	int mis2;
	int total;
	
	public :
		void get()
		{
			cout<<"Enter the marks in sessional 1 : ";
			cin>>mis1;
			cout<<"Enter the marks in sessional 2 :";
			cin>>mis2;
			
		}
		void out()
		{
			cout<<"Marks in sessional 1 = "<<mis1<<endl;
			cout<<"Marks in sessional 2 = "<<mis2<<endl;
			total = mis1 + mis2;
			cout<<"Total marks = "<<total<<endl;
		}
};
int main()
{
	details B;
	B.getdata();
	B.get();
	B.showdata();
	B.out();
}
