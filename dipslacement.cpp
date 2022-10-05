// to find displacemnt using the physics formula

# include <iostream>
using namespace std;
int main()
{
     float s,a,u,t;
	cout << "enter the values of acceleration , initial speed and time\n";
	cin >> a>>u>>t;
	s=u*t + (1/2)*a*t*t; 
	cout << "The value of s is "<<s;
	return 0;
}
