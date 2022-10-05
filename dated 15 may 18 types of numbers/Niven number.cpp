//Niven number
/*Niven numbers are  are also known as harshad numbers.
The number 18 is a harshad number in base 10,
 because the sum of the digits 1 and 8 is 9 (1 + 8 = 9), and 18 is divisible by 9 (since 18/9 = 2, and 2 is a whole number).
 */
 #include<iostream>
 using namespace std;
 int main()
 {
 	int num,rem,sum=0,i,copy;
 	cout<< "enter a number\n";
 	cin >>num
;   copy =num;
    while(num)
	{
		sum=num%10;
		num=num/10;
		
	} 	
	if(copy%sum==0)
	{
		cout <<copy<< " is a niven number";
		
	}
	else
	cout << copy<<" is not a niven number";
 	return 0;
 	
 }
