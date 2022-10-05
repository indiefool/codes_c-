#include<iostream>
using namespace std;            

class sample2 ; // forawrd declaration.
class sample1
{
	int x;
	
	public :
		sample1(int x1)
		{
			x = x1;
		}
		friend void small(sample1 s1,sample2 s2);
};
class sample2
{
	int y;
	
	public :
		sample2(int x1)
		{
			y = x1;
		}
		friend void small(sample1 s1,sample2 s2);
};
void small (sample1 s1,sample2 s2)
{
	if(s1.x<s2.y)
	cout<<"The data of object s1 is small"<<endl;
	else
	cout<<"The data of object s2 is small"<<endl;
}
int main()
{
	sample1 s1(40);
	sample2 s2(50);
	small (s1,s2);
}
