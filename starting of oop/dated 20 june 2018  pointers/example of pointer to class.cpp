// example of pointer and class
#include<iostream>
using namespace std;

class student
{
	int rn;
	char name[80];
	
	public :
		void getdata()
		{
			cin>>rn;
		    cin>>name;
		}
		void showdata()
		{
			cout<<name<<endl;
			cout<<rn<<endl;
		}
};
int main()
{

student s1;
student *p;
p = &s1; // now p points to s1;
p->getdata();
cout<<endl;
p->showdata();
}
/*NOTE :- in above, p->getdata() is equalto s1.getdata() and same for p->showdata(). Through pointer we cannot access private or protected member.*/
