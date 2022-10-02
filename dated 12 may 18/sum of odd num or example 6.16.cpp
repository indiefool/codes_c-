//write a program which calculate the sum of odd number
//Sum = 1+ 3 + 5 + 7 + 9 ....n

# include<iostream>
using namespace std;
int main()
{
	int n,Sum=0,i;
	cout <<"Enter number n ";
	cin >>n;
	for(i=1;i<=n;i+=2)
	Sum=Sum+i;
	cout <<Sum;
	

	return 0;
}
