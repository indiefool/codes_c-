//Automorphic number:-
/*an automorphic number (sometimes referred to as a circular number) is a number whose square "ends" in the same digits as the number itself.
 For example, 5*5 = 25, 6*6 = 36
*/
#include<iostream>
 using namespace std;
 int main()
 {
 	int num,rem,sum=0,i,copy,square;
 	cout<< "enter a number\n";
 	cin >>num;
 	
 	square=num*num;
 	copy=square%10;
    
	if(copy==num)
	{
		cout <<num<< " is an automorphic number\n";
	}
	else
	cout <<num<<" is not an automorphic number";
 	return 0;
 	
 }
