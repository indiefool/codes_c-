#include<iostream>
using namespace std;

class sample
{
	int x,y;
	
	public :
		sample(int a,int b)
		{
			x = a;
			y = b;
		}
		friend int add(sample s1);
};
int add(sample s1)
{
	return (s1.x + s1.y);
};
int main()
{
    sample s2(30,40);
    int sum;
    sum = add(s2);
    cout<<"sum of private data of object s2 = ";
    cout<<sum<<endl;
}
