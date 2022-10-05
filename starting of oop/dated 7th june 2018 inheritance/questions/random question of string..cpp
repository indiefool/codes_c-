
#include <iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
	int count =0;
    char  A[200],B[300];
    gets(A);
    
    gets(B);
    
    int l = strlen(B);
    int i;
    for(i=0;i<l;i++)
    {
    	if(A[i]!=B[i])
    	{
		A[i]=B[i];
    	count = count +2;
        }
	}
	cout<<count;
    

    return 0;
}

