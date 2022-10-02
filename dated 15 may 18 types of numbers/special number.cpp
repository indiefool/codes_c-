 //Special number
/* special number wo number hote hai jinke dgits ke factorial ka sum original number ke equal aata hai
*/  
   
#include<iostream>
 using namespace std;
 int main()
 {
 	int num,rem,sum=0,fact=1,i,copy,square;
 	cout<< "enter a number\n";
 	cin >>num;
 	copy=num;
 	
 	while(copy)
 	{
 		rem=copy%10;
 		i=rem;
 		while(i)
 		{
 			fact=fact*i;
 			i--;
		}
		 sum +=fact;
		 fact=1;
 		copy=copy/10;
	}
	 
	 if(sum==num)
	{
		cout <<num<< " is a special number\n";
	}
	else
	cout <<num<<" is not a special number";
 	return 0;
 	
 }
