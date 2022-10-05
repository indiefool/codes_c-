#include<iostream>
using namespace std;
class abc
{
	int x,y,u,t;
	public : 
	abc(int p,int q);
	abc(int r,int s);
	void output();
	
	
};
abc :: abc(int p,int q)
{
	x=p;
	y=q;
}
abc::abc(int r,int s)
{
t=r;
u=s;	
}
void abc :: output()
{
	cout<<x<<y<<t<<u<<endl;
}
int main()
{
	abc c1(10,20);
	abc c2(30,40);
	c1.output();
}
