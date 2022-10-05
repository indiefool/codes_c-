// here a program is made to open a file using open function.
/*The benefit of open function over  constructor to open a file is that once an object is created , that same object cAN BE USED to manage multiple files when open function is used.
*/
//THIS IS ALSO CALLED MANAGING MULTIPLE FILES USING SAME STREAM
#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	 char name[30];
	 int cost;
	 
	 ofstream fout;
	 fout.open("data"); // a file named data is created using open function.
	 fout<<"ravi"<<endl;
	 fout<<458<<endl;
	 fout.close();
	 
	 ifstream fin;
	 fin.open("data");
	 //cout<<"Enter name";
	 //1fin>>name; //  This will read  the info. present on the file and info. is not user input. if yuor program is asking for the input then there is something wrong in the program.
	 //fin>>cost;
	 cout<<"item name "<<name<<endl;
	 cout<<"item cost "<<cost<<endl;
	 fin.close();
}
