// The object of a class can be read and written in a file as follows:-

#include<iostream>
#include<fstream>

using namespace std;

class student
{
	protected :
		char name[50];
		int rn;
	public :
		void getdata()
		{
			cout<<"Enter name : ";
			cin>>name;
			cout<<"Enter roll number : ";
			cin>>rn;
		}
		void showdata()
		{
			cout<<"Name = "<<name<<endl;
			cout<<"Roll number = "<<rn<<endl;
		}
		
};
int main()
{
	student std;
	fstream file;
	file.open("test.dat",ios ::out);
	for(int i=0;i<=4;i++)
	{
		cout<<"student data"<<endl;
		std.getdata();
		file.write((char*)& std,sizeof(std));
	}
	file.close();
	file.open("test.dat",ios ::in);
	file.read((char*)& std,sizeof(std));
	while(!file.eof())
	{
		cout<<"student is"<<endl;
		std.showdata();
		file.read((char*)& std,sizeof(std));
	}
}
