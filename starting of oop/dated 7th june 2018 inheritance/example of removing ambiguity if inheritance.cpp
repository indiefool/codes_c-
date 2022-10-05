//another example of tackling of ambiguity of inheritance.
#include<iostream>
using namespace std;

class base1
{
	private :
		int x;
	public :
		void getdata()
		{
			x = 10;
			cout<<"x  = "<<x;
		}
 };
class derive1 : public base1
{
	private :
		int y;
	public :
		void getdata()
		{
			cout<<"Enter a value\n";
			cin>>y;
			if(y>10)
			base1 :: getdata();
			else
			cout<<"Bye";
		}
};
int main()
{
	derive1 d1;
	d1.getdata();
	return 0;
}
