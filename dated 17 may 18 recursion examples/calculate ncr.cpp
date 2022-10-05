// Program to calculate nCr using  the formula nCr = n!/((n-r)!*r!)
// USING FUNCTION


#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	long int fact( long int);
	long int n,r;
	cout<<"Enter the value of n and r\n";
	cin >> n>>r;
	 long int ncr;
	ncr = fact(n)/( fact(n-r)*fact(r) );
	cout<< "The value of "<<n << " C "<<r << " is " << ncr;
	return 0;
}
 long int fact(long int x)
 {
 	float fac=1;
 	while(x)
 	{
 		fac = fac*x;
		 x--; 		
	 }
	 return fac;
 	
 }
