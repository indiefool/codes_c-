/* Write a program to check divisibility of two numbers. If second number is not provided ,then the number should be tested for primeness.
*/

#include<iostream> 
using namespace std;

class div
{
	int n1,n2;
	
	public :
		void getdata()
		{
			cout<<"Enter n1 and n2\n";
			cin>>n1>>n2;
		}
		void perform()
		{
			if(n2 == '\n')
			{
				int c=0;
				for(int i =1;i<n1-1;n1++)
				{
					if(n1%i == 0)
					c++;
				}
				if(c==2)
				cout<<n1<<" is prime."<<endl;
			}
			else
			{
				if(n1%n2 == 0)
				{
					cout<<n1<<" is divisible by "<<n2<<endl;
				}
				else
				cout<<n1<<" is not divisible by "<<n2<<endl;
				
			}
		}
};
int main()
{
	div obj;
	obj.getdata();
	obj.perform();
}
