// Write a program for reading and writing multiple objects in file.

#include<iostream>
#include<fstream>

using namespace std;

class employee
{
	protected :
		int empno;
		char name[25];
		char dept[25];
		char desig[25];
		double basic;
		double deds;
		
		public :
			void getdata(void)
			{
				cout<<endl<<"enter empno : ";
				cin>>empno;
				cout<<endl<<"enter name : ";
				cin>>name;
				cout<<endl<<"enter department : ";
				cin>>dept;
				cout<<endl<<"enter designation : ";
				cin>>desig;
				cout<<endl<<"enter basic pay : ";
				cin>>basic;
				cout<<endl<<"enter dedductions : ";
				cin>>deds;
			}
			void showdata(void)
			{
				cout<<endl<<"employee number :"<<empno;
				cout<<endl<<"empname :"<<name;
				cout<<endl<<"department :"<<dept;
				cout<<endl<<"basic pay :"<<basic;
				cout<<endl<<"deductions :"<<deds;
			}
};
int main()
{
	char ch;
	employee emp;
	fstream file;
	file.open("pay.fil",ios  ::app |ios::out |ios::in);
	do
	{
		cout<<"enter employee data"<<endl;
		emp.getdata();
		file.write((char*)&emp,sizeof(emp)) ;
		cout<<endl<<"anymore employees ? (y/n)"<<endl;
		cin>>ch;
	}
	while(ch == 'y');
	
	file.seekg(0);
	file.read((char*)&emp ,sizeof(emp));
	
}
