//array of pointer. The array of pointer is declared as follows :- data-type  * array-name[size]
#include<iostream>
using namespace std;

int main()
{
	char *a[3] = {"zahir khan","rakesh","ash"};
	for(int i = 0;i<=2;i++)
	{
		cout<<a[i]<<endl;
	}
}
