// Armstrong number
/*An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself. For example, 371 is an Armstrong number since 3**3 + 7**3 + 1**3 = 371. Write a program to find all Armstrong number in the range of 0 and 999.

*/
#include <iostream>
using namespace std;
int main()
{
	int num,sum=0,rem,i,copy;
	cout <<"enter a number\n";
	cin>>num;
	copy=num;
	while(num)
	{
		i=num%10;
		sum=sum+i*i*i;
		num=num/10;
	}
	if(copy==sum)
	{
		cout<<copy<< " is an armstrong number\n";
	}
	else
	cout<<copy<< " is not an armstrong number\n";
	return 0;
}
