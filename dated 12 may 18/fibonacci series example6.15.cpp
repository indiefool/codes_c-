// fibonacci

# include<iostream>
using namespace std;
int main()
{
	int n;
	int a1,a2,a3;
	int c=2;
	cout <<"Enter how many nuber series you need ";
	cin >>n;
	a1=1;a2=1;
	cout<< a1<<endl;
	cout << a2<<endl;
	while(c<n)
	{
		a3=a1+a2;
		a1=a2;
		a2=a3;
		cout<<a3<<endl;
		c++;
	}

	return 0;
}
