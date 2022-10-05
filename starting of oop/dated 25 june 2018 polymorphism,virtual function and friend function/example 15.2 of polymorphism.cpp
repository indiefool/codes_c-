// POLYMORPHISM EXAMPLE 15.2

#include<iostream>
using namespace std;

void line(char f);
void line(int c);

int main()
{
	int c1;
	char f1;
	cout<<"Enter an integer number\n";
	cin>>c1;
	cout<<"Enter a character\n";
	cin>>f1;
	cout<<"Line by integer number\n";
	line(c1);
	cout<<"Line by character\n";
	line(f1);
}
void line(char f)
{
	for(int i=0;i<=4;i++)
	{
		cout<<f<<" ";
	}
	cout<<endl;
}
void line(int c)
{
	for(int i=0;i<=4;i++)
	{
		cout<<c<<" ";
	}
	cout<<endl;
}
