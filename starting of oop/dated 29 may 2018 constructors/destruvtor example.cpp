//Write a program to give conclusion that destructor is invoke automatically at the end of its scope.

#include<iostream>
using namespace std;

class add
{
	int n1,n2;
	
	public :
	add (int,int);
	~add();
};
add :: add(int x,int y)
{
	n1 = x;
	n2 = y;
	int sum =  n1 + n2;
	cout<<"The sum of "<<x<<" and "<<y<<" is "<<sum;
}
add :: ~add()
{
	cout<<"\nn1 = 0\n";
	cout<<"n2 = 0\n";
	cout<<"Destructor called object destroyed";
}

int main()
{
	int x,y;
	cout<<"Enter the two numbers\n";
	cin>>x>>y;
	add c1(x,y);
}

