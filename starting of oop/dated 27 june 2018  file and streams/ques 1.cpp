#include<iostream>
using namespace std;

#include<fstream>

int main()
{
	char f[90];
	
	
	
	ofstream obj ("data",ios ::ate);
	obj<<"my nameisanthony"<<endl;
	obj.close();
	
	ifstream obj1("data");
	obj1>>f;
	
	
	cout<<obj1.tellg()<<endl;
	obj1.close();
	
}
