#include<iostream>
using namespace std;
struct node
{
	int data;
	node* link;
};
node* top = NULL;
void push(int x)
{
	node* temp = new node();
	temp->data = x;
	temp->link = top;
	top = temp;
}
void pop()
{
	node* temp = top;
	if(top==NULL)
	return ;
	top = top->link;
	delete temp;
}
int topic()//i wanted to name this function as top but during function call it was giving error so i named it topic.
{
	cout<<top->data<<" \n";
}
void IsEmpty()
{
	if(top == NULL)
	{
	cout<<"Yes\n";
	return ;
    }
    else
    {  cout<<"No\n";
    	
	}
	
}
void print()
{
	node* temp = top;
	while(temp!= NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->link;
	}
	cout<<"\n";
}
int main()
{
	int n,x;
	cout<<"Enter the value of n\n";
	cin>>n;
	int i;
	for(i=0;i<n;i++)
	{
		cin>>x;
		push(x);
	}
	topic();
	pop();print();
	topic();
	IsEmpty();
}
