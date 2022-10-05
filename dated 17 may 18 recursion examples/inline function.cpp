// PROGRAM USING INLINE FUNCTION
/*The inline functions are a C++ enhancement feature to increase the execution time of a program.*/

#include <iostream>
#include<math.h>
using namespace std;

inline double cube (double x)
{
	return (x*x*x);
}
int main()
{
	double a;
	cout <<"Enter a number\n";
	cin>>a;
	cout<< "The cube of "<<a<< " is "<<cube(a);
	
	return 0;
}

