/* Overloading of assignment operator :-
                                         We can overload the assignment operator = , += , -=, *=, /= etc.
	
	Example 13.5 :- OVERLOADING OF = AND + = OPERATOR
*/
#include<iostream>
using namespace std;
class sample 
{
	int d;
	public :
		sample ()
		{
			d = 0;
		}
		sample (int a1)
		{
			d = a1;
		}
		void show()
		{
			cout<<d<<endl;
		}
		void operator = (sample s1)
		{
			d = s1.d;
		}
		void operator += (sample s2)
		{
			d = d + s2.d;
		}
};
int main()
{
	sample s3;
	sample s4(6);
	sample s5(7);
	
	s3 =s4;
	s5 += s4;
	
	cout<<"Data member of s3 is "<<endl;
	s3.show();
	cout<<"Data member of s4 is "<<endl;
	s4.show();
	cout<<"Data member of s5 is"<<endl;
	s5.show();
 } 
