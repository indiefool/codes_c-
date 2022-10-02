/*
        1       
      1 2 1     
    1 2 3 2 1   
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1
*/
# include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>i;j--)
		cout << "  ";
		for(j=1;j<=i;j++)
		cout << j<<" ";
		for(j=j-2;j>=1;j--)
		cout << j<<" ";
		cout << "\n";
	}
}

