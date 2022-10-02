/*Pallindrome Number
*/
#include <iostream>
using namespace std;
int main()
{
	int num,rem,d,sum=0,copy;
	
	cout << "Enter a number\n";
	while(cin >> num)
	{
	copy=num;
	while(num)
	{
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
		
	}
	if(copy==sum)
	{
		cout<< copy << " is a pallindrome number\n";
		
	}
	else
	cout<<copy<< " is not a pallindrome number";
	sum=0;
}
	return 0;
	
}

