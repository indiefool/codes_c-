#include<fstream>
#include<iostream>

using namespace std;

int main()
{
	ofstream outfile ("result");
	outfile<<"Sneha"<<endl;
	outfile<<"marks"<<endl;
	outfile<<"450"<<endl;
	outfile.close();
	
	ifstream infile ("result");
	char name[80],name1[80],name2 [80];
	infile>>name>>name1>>name2;
	cout<<name<<" "<<name1<<" "<<name2<<endl;
	infile.close();
	
	// The ifstream block can also be witten as
	    
		/* char name[90];
		 ifstream infile("result");
		 while(infile)
		 infile.getline(name,80);
		 cout<<name<<endl; // although this block is giving nothing as output .hehehehe.
		 */
}
