/*NOTE :- We cannot the following statement as c2 = c1 ++;
where c1 and c2 are both of class complex because the return type of operator ++() function is void.
We can solve this problem by changing the return type of operator ++() function.
*/
/*NOTE :- WE CAN DIFFERENTIATE THE PREFIX AND POSTFIX BY CHANGING THE HEADER OF OPERATION LIKE FOLLOWS -
1. operator ++ () // does prefix
2. operator ++ (int) // does postfix

The (2) declaration uses a dummy operator int argument which is set to zero by the postfix ++ operator. This extra argument allows the compiler to distinguish the two 
forms .similarly this concept is applied for the decrement operator --.
*/
#include<iostream>
using namespace std;
class complex 
{
	int r;
	int i;
	
	public :
		void getdata()
		{
			cout<<"Enter the real part "<<endl;cin>>r;
			cout<<"Enter the imaginary part "<<endl;cin>>i;
		}
		complex operator ++()
		{
			complex temp;
			
			temp.r= r++;
			temp.i= i++;
			
			return (temp);
		}
		void showdata()
		{
			cout<<r<<" +i"<<i<<endl;
		}
};
int main()
{
	complex c1,c2;
	c1.getdata();
    cout<<"Data after incrementation\n";
    ++c1 ;
    c1.showdata();
    c2 = ++c1;
    
    c2.showdata();
}
