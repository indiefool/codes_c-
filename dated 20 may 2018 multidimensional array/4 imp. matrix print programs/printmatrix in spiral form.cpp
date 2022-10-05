
// print matrix in spiral form

/* Input:
        1    2   3   4
        5    6   7   8
        9   10  11  12
        13  14  15  16
Output: 
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 
*/
#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"Enter the values of m(row) and n(coloumn)\n";
	cin>>m>>n;
	int a[m][n];
	int i,j;
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	cin>>a[i][j];
	
	int k=0,l=0;
	
	while(k<m && l<n)
	{
		
		
			for(j=0;j<n;j++)
			{
				cout<<a[k][j]<<" ";
			}
			k++;
			for(i=0;i<m;i++)
			{
				cout<<a[i][n-1]<<" ";
			}
			n--;
			for(j=n-1;j>=l;j--)
			{
				cout<<a[m-1][j]<<" ";
	        }
	        m--;
	        for(i=m-1;i>=k;i--)
	        { 
	        cout<<a[i][l]<<" ";
			}
			l++;
		
	}
 
    return 0;	
}

