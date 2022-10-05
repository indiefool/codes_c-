// Example 11.6 :-
// Write a program which calculates simple interest

#include<iostream>
using namespace std;
int p,n,r;
 class interest
{
	int principal,rate,year;
	float amount;
	public :
		interest(int p,int n,int r);
		
		void cal(void);
};
interest :: interest (int p,int n,int r)
{
	principal =p;
	rate = r;
	year = n;
}
void interest :: cal(void)
{
	cout<<"Principal "<<principal<<endl;
	cout<<"Rate"<<rate<<endl;
	cout<<"year"<<year<<endl;
	amount = (float) (p*n*r)/100;
	cout<<"Amount"<<amount;
}
int main()
{
	interest i1(1000,2,3);
	interest i2(1000,2,15);
	i1.cal();
	i2.cal();
	
	
}
