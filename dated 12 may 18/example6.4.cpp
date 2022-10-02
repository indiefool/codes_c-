# include<iostream>
using namespace std;
int main()
{
	int F,x,y,n;
	cout << "enter the values of x,y,n";
	cin >> x>>y>>n;
	if(n>0)
	F=x+y;
	else
	F=x-y;
	
	cout << "The value of F is "<<F;

	return 0;
}
