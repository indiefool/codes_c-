/*Write a program using two classes employee and grade. The class employee is base class and the grade is derived class.The functions getdata() and showdata() are 
declared for both the classes. For the class employee the functions are defined with empty body or no code inside the function . The code is written for the grade class.
The methods of the derived class are invoked by the pointer to the base class.
Demonstrate how pure virtual function defined, declared and invoked from the object of derived class through pointer of base class.
*/
#include<iostream>
using namespace std;

class employee
{
	int code;
	char name[30];
	
	public :
		virtual void getdata();
		virtual void showdata();
		
};
class grade : public employee
{
	char grade[90];
	float salary;
	
	public :
		void getdata();
		void showdata();
};
void employee :: getdata()
{
}
void employee :: showdata()
{
}
void grade :: getdata()
{
	cout<<"enter the employee's grade\n";
	cin>>grade;
	cout<<"enter employee's salary\n";
	cin>>salary;
}
void grade :: showdata()
{
	cout<<"Grade salary\n";
	cout<<grade<<" "<<salary<<endl;
}
int main()
{
	employee* ptr;
	grade obj;
	ptr = &obj;
	ptr->getdata();
	ptr->showdata();
}
