// program to convert binary to decimal form

# include<iostream>
# include<math.h>
using namespace std;
int main()
{
	int n,base=0,sum=0.0,bit;
	cout <<"Enter the binary number ";
	cin >> n;
	while(n)
	{
		bit= n%10;
		sum=sum + bit*pow(2,base);
		base++;
		n=n/10;
	}
	cout <<"The number is "<<sum;

	return 0;
}
