// 1/2 - 2/3 + 3/4 - 4/5 + 5/6 - ...... n

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float n,i,j,sum=0;
	cout<<"Enter a number\n";
    cin >>n;
    for(i=1;i<=n;i++)
	{
		sum=sum+pow(-1,i-1)*(i/(i+1));
	}
	cout<<sum;
	return 0;
}
