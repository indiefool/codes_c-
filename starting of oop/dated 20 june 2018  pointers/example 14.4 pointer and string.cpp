// Example 14.4 :- pointer and string
/*
NOTE :- String is array of char . Therefore pointer notation can be applied to the characters in the string . But ,
if we initialise the string at the time of the declaration then the string name is contant.Therefore we cannot perform the pointer arithmetic operation with that.
*/
#include<iostream>
using namespace std;
int main()
{
	char *str1= "Anju Lata";
	cout<<str1<<endl;
	str1++; // This here is ok and it would not have been ok if the string was not declared by pointer or i it was declared like char str1= "Anju Lata";
	
	cout<<str1<<endl; 
}
/*//below program will give error as str is constant below
#include<iostream>
using namespace std;

int main()
{
char str[] = "Saurabh Pal";
cout<<str; // will display the string.
str ++ ; //illegal
}*/
