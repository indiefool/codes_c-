/* constructor from class to basic type

Example 13.7:-  The example is using a class that represents the distance. same class as in example 13.6 , this converts a class distan to floating type data member.

*/
#include<iostream>
using namespace std;

class distan
{
	int feet;
	float inches;
	public :
		distan(int f,float i)
		{
			feet =f;
			inches = i;
		}
		void show()
		{
			cout<<feet<<" -> "<<inches<<endl;
		}
		operator float() // This here is the casting operator and in its syntax , no return type is present.
		{
			float ft = inches/12;
			ft = ft + feet;
			return (ft/3.28);
		}
};
int main()
{
	distan d1(3,3.36);
	float m = d1;
	cout<<"distance in meter "<<m<<endl;
	cout<<"distance in feet and inches "<<endl;
	d1.show();
}

/* In the above program the following function converts class type to basic type.
     	operator float()
		{
			float ft = inches/12;
			ft = ft + feet;
			return (ft/3.28);
		}
When we write 
float m = d1;
in main() , above function is called take feet and inches of distance  d1 and return a float type data.
*/
 
