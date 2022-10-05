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
	file.open("result.dat",ios ::out);
	for(int i=0;i<=2;i++)
	{
		cout<<"enter data\n";
		std.getdata();
		file.read((char*)& std,sizeof(std));
	}
	file.close();
	
	file.open("result.dat",ios::in);
	int length = file.tellg();
	int n = length/sizeof(std);
	int m;
	cout<<"The total student in file ="<<n<<"\n";
	cout<<"Enter which student no. of student you want to read"<<"\n";
	cin>>m;
	int position = (m-1)*(sizeof(std));
	file.seekg(position);
	file.read((char*)& std,sizeof(std));
	std.showdata();
}
