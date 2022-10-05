// print matrix in zigzag form

/* eg:- if you have matrix like 1 2 3
                                5 0 6
                                8 9 0
                                
                                then the output should be 1 2 3 6 0 5 8 9 0
                                */
                        
#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"Enter the values of m(row) and n(coloumn)\n";
	cin>>m>>n;
	int a[m][n];
	int i,j,k;
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	cin>>a[i][j];
	
	for(i=0;i<m;i++)
	{
		if(i%2==0)
		{
		
		for(j=0;j<n;j++)
		{
			
			cout<<a[i][j]<<" ";
			
			
		}
	    }
	    else
	    {
	    	for(j=n-1;j>=0;j--)
	    	{
	    		cout<<a[i][j]<<" ";
			}
		}
		
	}
	return 0;
}
