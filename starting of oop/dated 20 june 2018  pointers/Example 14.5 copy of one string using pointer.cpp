// STRING WITH POINTER NOTATION AS A FUNCTION ARGUMENTS
/* We represent a string using pointer that is known as string with pointer notation . Eg :- char *s;
*/
//Example 14.5 :- Copy of one string by using pointer.

#include<iostream>
using namespace std;
int main()
{
	void copy(char *, char *);
	
	char *s1 = "Brett Lee";
	char s2[80];  
	copy(s2,s1);
	cout<<s2<<endl;
}
void copy(char *d,char *s)
{
	while(*s)
	*d++ = *s++;
	*d = '\0';
}
/* Note:- The statement 
                        *d++ = *s++;
                        means first the value pointed by s is assigned to *d then both d and s is increment, because the increment is postfix increment.
