//pointer and  multidimensional array.
// Example 14.3 :- 

#include<iostream>
using namespace std;
int main()
{
	int a[2][3] = { {5,6,7},{8,9,10}};
	for(int i=0;i<=1;i++)
	{
		for(int j = 0;j<=2 ; j++)
		{
			cout<<*(*(a+i) + j)<<"   ";
		}
	}
}

