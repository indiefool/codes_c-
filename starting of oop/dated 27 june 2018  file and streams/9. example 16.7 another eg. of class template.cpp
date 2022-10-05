#include<iostream>
using namespace std;

template <class T>

class sample
{
	T a,b;
	public :
		sample(T a1,T b1)
		{
			a = a1;
			b = b1;
		}
		T small()
		{
			if(a<b)
			return a;
			else return b;
		}
};
int main()
{
	sample<int> obj1(10,5);
	sample<float> obj2(2.25,5.025);
	cout<<"smaller is in integer = "<<obj1.small();
	cout<<endl;
	cout<<"smaller in float = "<<obj2.small();
	cout<<endl;
}
