//Zigzag (or diagonal) transversal of Matrix
/*
suppose you have matrix like this 1 2 3 4
                                  2 0 1 0
                                  5 6 3 5
                                  
                                  then the result should be
                                  1
                                  2 2
                                  5 0 3
                                  6 1 4
                                  3 0
                                  5
*/
#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"Enter the values of m and n\n";
	cin >>m>>n;
	int i,j,k,l;
	int a[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		cin>>a[i][j];
	}
    
    for(k=0;k<m;k++)
    {
    	cout<<a[k][0]<<" "<<endl;
    	i=k-1;
    	j=0;
    	
    	while(i)
    	{
    		if(i==-m+1)
    		break;
    		
			cout<<a[i][j]<<" ";
    		i--;
    		j++;
		}
    	cout<<endl;
	}
	
	
	
}
