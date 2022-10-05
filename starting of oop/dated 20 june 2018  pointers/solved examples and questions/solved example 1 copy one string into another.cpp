//write a program to copy one string into another string using pointer.

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	void copy(char *,char *);
	char p[20];
	cin>>p;
	char c[21];
	copy(c,p);
	cout<<c;
}
void copy(char *a,char *b)
{
	while(*b!='\0')
	{
		*a++ = *b++;
	}
	*a = '\0';
	
}
