/* syntax is 
                ofstream objectname ("filename")
*/

#include<fstream>
#include<iostream>

using namespace std;

int main()
{
	char name[20];
	float cost;
	ofstream outf ("data"); // after this statement , a file named data is created.
	cout<<"Enter item name\n";
	cin>>name;
	cout<<"Enter item cost\n";
	cin>>cost;
	outf<<name<<endl;
	outf<<cost<<endl;
	outf.close();
	
	ifstream inf("data");
	inf>>name;
	inf>>cost;
	cout<<"item name "<<name<<endl;
	cout<<"item cost "<<cost<<endl;
	inf.close();
}
