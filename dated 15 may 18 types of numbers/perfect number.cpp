// Perfect number :- Perfect number is a number which is equal to sum of its divisor. For eg,divisors of 6 are 1,2 and 3. The sum of these divisors is 6. So 6 is called as perfect number.

#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0;
	
	cout <<"enter a number"<<endl;
	cin >> n;
	i=1;
	while(i<n)
	{
		if(n%i==0)
		{
		  sum=sum+i;	
		}
		i++;
	}
	if(sum==n){
		cout<<"yes "<<n<<" is a perfect number";
		
	}
	else
	cout <<"no";
	
	return 0;
}
