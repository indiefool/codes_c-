// Overloading of comparison operator(also known as relational operator).
     /*                                                              Eg :- 1. ==
	                                                                       2. !=
																		   3. >
																		   4. <
																		   5. >=
																		   6. <= 
	*/
/* Example 13.4 :- */
#include<iostream>
#include<conio.h>
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
		int operator < (sample s)
		{
			if(d<s.d)
			{
				return true;
			}
			else
			return false;
		}
};

int main()
{
	sample s1;
	sample s2(4);
	sample s3(6);
	
	if(s1<s2)
	{
		cout<<"s1 is less than s2\n";
	}
	else
	cout<<"s1 is not less than s2\n";
	if(s3<s2)
	{
		cout<<"s3 is less than s2 \n";
	}
	else
	cout<<"s3 is not less than s2\n";
	
	cout<<"Member of s1 is = "<<endl;
	s1.show();
	
	cout<<"Member of s2 is = "<<endl;
	s2.show();
	
	cout<<"Member of s3 is = "<<endl;
	s3.show();
	
	
}
