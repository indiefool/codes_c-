/*write a program to genrate the pattern given below
6 6 6 6 6 6
5 5 5 5 5
4 4 4 4
3 3 3
2 2 
1 
*/
# include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=6;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		cout << i<<" ";
		cout<<endl;
	}

	return 0;
}
