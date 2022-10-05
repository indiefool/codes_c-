/* to calculate power of a number;*/

# include <iostream>
# include <math.h>
using namespace std;
int main()
{
	float num,p;
	cout << "enter two number 1st one being base and the other being its power\n";
	cin >> num >> p;
	cout << "the result is "<<pow(num,p);
	return 0;
}
