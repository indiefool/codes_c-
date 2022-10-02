/* Buzz number:-
A number is said to be buzz number if it ends with  7 or is divisble by 7
*/

#include<iostream>
 using namespace std;
 int main()
 {
 	int num,rem,sum=0,i,copy,square;
 	cout<< "enter a number\n";
 	cin >>num;
 	copy=num;
 	
	 if(copy%7==0 || copy%10==7)
	{
		cout <<num<< " is a buzz number\n";
	}
	else
	cout <<num<<" is not a buzz number";
 	return 0;
 	
 }
