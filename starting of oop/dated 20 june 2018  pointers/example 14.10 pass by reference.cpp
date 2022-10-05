
/*
below is the method of pass by reference.*/

#include<iostream>
using namespace std;

int main()
{
	int a,b;
	void swap(int &,int &); 
	
		a = 10;
		b = 20;
		swap(a,b);
		cout<<"a = "<<a<<"\nb = "<<b<<endl;
		return 0;
	
}
void swap(int &a1,int &b1)
{
	int t;
	t = a1;
	a1 = b1;
	b1 = t;
}


