//pointer and dynamic constructor  ////// this program is giving errorrrrr..................................................................

#include<iostream>
using namespace std;

class matri
{
	int **p;
	int row;
	int col;
	
	public :
		matri(int r,int c);
		void input(int i,int j,int v);
		int & output(int i,int j);	
};
matri ::  matri(int r,int c)
{
	row = r;
	col = c;
	p = new int* [row];
	for(int k=0;k<=(row-1);k++)
	p[k] = new int[col];
}
void matri :: input(int i,int j,int v)
{
	p[i][j] = v;
}
int & matri :: output(int i,int j){
	return p[i][j];
}

int main()
{
	matri m1 [2] [3]; 
	matri m2 [2] [3];
	int i,j,value;
	cout<<"Enter element for the matri m1"<<endl;
	for(i=0;i<=1;i++)
	{
		for(i=0;i<=2;i++)
		{
			cin>>value;
			m1.input(i,j,value);
			cout<<endl;
		}
	}
	cout<<"Enter element for matri m2"<<endl;
		for(i=0;i<=1;i++)
	{
		for(i=0;i<=2;i++)
		{
			cin>>value;
			m2.input(i,j,value);
			cout<<endl;
		}
	}
	cout<<"matri m1 is"<<endl;
	for(i=0;i<=1;i++)
	{
		for(i=0;i<=2;i++)
		{
			
			m1.output(i,j);
			cout<<" ";
		}
		cout<<endl;
	}cout<<"matri m2 is"<<endl;
	for(i=0;i<=1;i++)
	{
		for(i=0;i<=2;i++)
		{
			
			m2.output(i,j);
			cout<<" ";
		}
		cout<<endl;
	}
}
