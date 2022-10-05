/*Template :- Template are very important feature. By using templates we can define generic classes (both classes and functions).

example of class template
*/
#include<iostream>
using namespace std;
template <class T>


class add
{
	T a,b;
	
	public :
		void getdata()
		{
			cout<<"Enter first data = ";
			cin>>a;
			cout<<"Enter second data = ";
			cin>>b;
		}
		T sum()
		{
			T c;
			c = a+b;
			return(c);
		}
};
int main()
{
	add<int> obj1;
	add<float> obj2;
	cout<<"Enter integer number "<<endl;
	obj1.getdata();
	cout<<"sum of integer data ="<<obj1.sum()<<endl;
	cout<<"Enter float number "<<endl;
	obj2.getdata();
	cout<<"sum of float data ="<<obj2.sum()<<endl;	
}
