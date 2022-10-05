//Example 12.9 :- another example of removing the ambiguity og inheritance

#include<iostream>
using namespace std;
class base1
{
	public :
		int a;
		
};
class base2
{
	public :
		int a;
};
class base3
{
	public :
		int a;
};
class drive : public base1,public base2,public base3
{
	public :
		int a;
};
int main()
{
	base1 b1;
	b1.a =10; //This statement assigns 10 to a of b1;
	drive d1;
	d1.a = 20; //This statement assigns 20 to a of derived class;
	d1.base1 ::  a =30;
	d1.base2 ::  a = 40;
	d1.base3 ::  a = 50;
}
