# include <iostream>
using namespace std;
int main()
{
	int pa,roi,time,si;
	cout << "enter principal amount\n";
	cin >> pa;
	cout << "enter rate of interest\n";
	cin >> roi;
	cout << "enter time \n";
	cin >> time;
	si=pa*roi*time/100;
	cout << "simple interest is " << si;
	return 0;
 } 
