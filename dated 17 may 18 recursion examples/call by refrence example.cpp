// call by refrence or passing by refrence



#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int x,y;
	void swap(int * ,int *);
	x=10;
	y=20;
	swap(&x,&y);
	cout << "x = "<<x<<endl;
	cout << "y = "<<y<<endl;
	return 0;
}
void swap(int *a ,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
	
}
/*
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int x,y;
	void swap(int & ,int &);
	x=10;
	y=20;
	swap(x,y);
	cout << "x = "<<x<<endl;
	cout << "y = "<<y<<endl;
	return 0;
}
void swap(int  &a ,int &b)
{
	int c;
	c=a;
	a=b;
	b=c;
	
}
*/









