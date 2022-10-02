/*Neon numbers:-
A neon number is a number where the sum of digits of square of the number is equal to the number. 
For example if the input number is 9, its square is 9*9 = 81 and sum of the digits is 9. i.e. 9 is a neon number.
*/

#include<iostream>
 using namespace std;
 int main()
 {
 	int num,rem,sum=0,i,copy,square;
 	cout<< "enter a number\n";
 	cin >>num;
    square=num*num;
    while(square)
    {
    	sum=sum+square%10;
    	square = square/10;
    	
	}
	if(sum==num)
	{
		cout <<num<< " is a neon number\n";
	}
	else
	cout <<num<<" is not a neon number";
 	return 0;
 	
 }
