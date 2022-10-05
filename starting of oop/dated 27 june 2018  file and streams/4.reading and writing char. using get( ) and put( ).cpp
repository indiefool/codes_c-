#include<iostream>
#include<fstream>

using namespace std;

/*int main()
{
	char c;
	ofstream outfile ("test");
	for(int i=0 ;i<=16;i++)
	{
		cout<<"Enter a character\n";
		cin>>c;
		outfile.put(c);
	}
	outfile.close();
	
	ifstream infile ("test");
	while(infile)
	{
		infile.get(c);
		cout<<c<<endl;
	}
}*/
int main()
{
	int count = 0;
	char ch;
	cout<"input text\n";
	while(ch!='\n')
	{
		cin.get(ch);
		cout.put(ch);
		count++;
	}
	cout<<"Number of characters "<<count-1;
}
