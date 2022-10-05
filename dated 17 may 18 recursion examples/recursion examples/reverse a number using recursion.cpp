//reverse a number using recursion

#include <iostream>
#include<math.h>
using namespace std;
int rev(int,int);
int main()
{
   
    int n;
    cout<<"Enter a number\n";
	cin >>n;
	int temp=n;
	int length=0;
	while(temp)
	{
		length++;
		temp=temp/10;
	}
	int reverse=rev(n,length);	 
	cout <<"The reverse of "<<n<< " is "<<reverse;
	return 0;
}
int rev(int x,int y)
{
	
if(y)
{
	return (x%10)*pow(10,y-1) + rev(x/10,y-1);
}
else
return 0;
}
