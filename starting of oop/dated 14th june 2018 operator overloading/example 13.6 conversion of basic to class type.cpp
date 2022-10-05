/* Conversion of basic to class type .
This conversion  of basic to class type is very simple . This can be done using constructor.

Example 13.6:-
                The following example is using a class which has two data memeber feet and inches.These represent the distance in main().We are assigning a distance
                which is in meter (float type) to that class.
*/                
#include<iostream>
using namespace std;

class distan
{
	int feet;
	float inches;
	
	public :
		distan ()
		{
			
		}
		distan(float mtr)
		{
			float f = 3.28 * mtr;
			feet = int (f);
			inches = 12 * (f-feet);
		}
		void show()
		{
			cout<<"Distance is : "<<endl;
			cout<<feet<<"/"<<inches<<endl;
		}
};
int main()
{
	float meter;
	cout<<"Enter a distance : ";
	cin>> meter;
	distan d1;
	d1 = meter; // this is same as distance d1(meter);
	d1.show();
}
