//Power of any digit using recursion

#include<iostream>
#include<math.h>

using namespace std;
int main()
{
	long int pow(int, int);
	int n,p;
	cout <<"enter a number and the power which you want to calculate\n";
	cin>>n>>p;
	long int net=pow(n,p);
	cout <<"The answer is "<<net;
	return 0;
}
long int pow(int x,int y)
{
    if(y)
    {
    	return x*pow(x,y-1);
    	
	}
	else
	return 1;
}
