#include<iostream>
using namespace std;

class salary
{
  char name[200];
  char desig[100];
  int an;
  char doj[90];
  int basicsal;
  
  public:
  void getdata()
  {
  	cout<<"Enter the name : ";
  	cin>>name;
  	cout<<"Your designation : ";
  	cin>>desig;
  	cout<<"Your account number : ";
  	cin>>an;
  	cout<<"Your date of joining : ";
  	cin>>doj;
  	cout<<"Your basic sal : ";
  	cin>>basicsal;
  }
  void showdata()
  {
  	cout<<"Name is "<<name<<endl;
  	cout<<"designation is "<<desig<<endl;
  	cout<<"account number is "<<an<<endl;
  	cout<<"date of joining is "<<doj<<endl;
  	cout<<"basic salary is "<<basicsal<<endl;
  }	
};
class allowance : public salary
{
	int DA,HRA,CCA;
	
	public :
		void get()
		{
			cout<<"Enter the Dearness Allowance : ";
			cin>>DA;
			cout<<"Enter the House Rent Allowance : ";
			cin>>HRA;
			cout<<"Enter the City Compulsatory Allowance : ";
			cin>>CCA;
		}
		void show()
		{
			cout<<"The DA given is "<<DA<<endl;
			cout<<"The HRA given is "<<HRA<<endl;
			cout<<"The CCA given is "<<CCA<<endl;
		}
};
class deduc : public allowance
{
	int PPF,GPF,CPF;
	
	public :
		void ge()
		{
			cout<<"Enter the Public Provident Fund : ";
			cin>>PPF;
			cout<<"Enter the General Pension Fund : ";
			cin>>GPF;
			cout<<"Enter the Central Provident Fund : ";
			cin>>CPF;
		}
		void ou()
		{
			cout<<"PPF is "<<PPF<<endl;
			cout<<"GPF is "<<GPF<<endl;
			cout<<"CPF is "<<CPF<<endl;
		}
};
int main()
{
	deduc obj;
	obj.getdata();
	obj.get();
	obj.ge();
	obj.showdata();
	obj.show();
	obj.ou();
}

