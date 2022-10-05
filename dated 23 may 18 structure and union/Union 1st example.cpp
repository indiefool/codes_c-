// Program assigns and display union member

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	union data
	{
		int i;float f;
	};
	data d;
	d.i=10;
	d.f=10.5;
	cout<<"First number "<<d.i<<endl;
	cout<<"Second number"<<d.f<<endl;
	d.i=10.5;
	cout<<"First number"<<d.i<<endl;
	cout<<"Second number"<<d.f<<endl;
}
