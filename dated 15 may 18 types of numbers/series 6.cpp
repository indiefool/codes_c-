// 1 2 3 6 9 18 27 54...

#include<iostream>
using namespace std;
int main()
{
	int n,i,j=2,k=1;
	cout<<"Enter a number\n";
    cin >>n;
    for(i=1;i<=n;i++)
	{
		cout << k<<" ";
		cout << j<<" ";
		k=k*3;
		j=j*3;
		
	}

	return 0;
}
