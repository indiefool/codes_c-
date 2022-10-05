// Example :
/*          Write a program which assigns a mobile manufacturer name,model number and cost of the two mobile and print all information by oop
*/
#include<iostream>
using namespace std;
class mob
{
	char nom[90],mn[90];int cost;
	
	public :
		void getdata();
		void showdata();
};
void mob :: getdata()
{
	cout<<"Enter name of manufacturer\n";
	cin>>nom;
	cout<<"Enter model number\n";
	cin>>mn;
	cout<<"Enter cost\n";
	cin>>cost;
}
void mob :: showdata()
{
	cout<<"Manufacturer name\n";
	cout<<nom<<endl;
	cout<<"Model number\n";
	cout<<mn<<endl;
	cout<<"Cost\n";
	cout<<cost<<endl;
}
int main()
{
	mob m[2];
	int i;
	for(i=0;i<2;i++)
	{
		cout<<"Enter the details of student "<<i+1<<endl;
		m[i].getdata();
	}
	cout<<endl;
	for(i=0;i<2;i++)
	{
		cout<<"The details of student "<<i+1<<endl;
		m[i].showdata();
	}
	
}
