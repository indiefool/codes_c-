// Write a program using default constructor to calculate area and perimeter of the rectangle depending upon the argument passed
#include<iostream>
using namespace std;
class rec
{
	int l,b;
	
	public :
		
		rec (int ll,int bb);
};

rec :: rec(int ll,int bb)
{
	int a = ll;
	int b = bb;
	int area = a*b;
	cout<<"Area = "<<area<<endl;
	int peri = 2*(a+b);
	cout<<"perimeter = "<<peri<<endl;
}
int main()
{
	
	int l,b;
	cout<<"Enter the values of length and breadth\n";
	cin>>l>>b;
	rec c(l,b);
	
	return 0;
}
