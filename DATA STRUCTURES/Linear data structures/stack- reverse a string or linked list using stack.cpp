
 //here two things will be talked about.
 /* 1. Reverse a string.
    2. Reverse a linked list.
*/

//Reverse a string using stack.
#include<iostream>
#include<string.h>
#include<stack> // stack from standard template library (STL)
using namespace std;
void reverse(char c[],int n)
{
	stack<char> S;
	// loop for push
	for(int i=0;i<n;i++)
	 S.push(c[i]);
	 
	 // loop for pop
	 for(int i=0;i<n;i++)
	 {
	 	c[i]= S.top(); // overwrite the character or index i
	 	S.pop();
	 }
}
int main()
{
	char c[51];
	cout<<"Enter a string \n";
	gets(c);
	reverse(c,strlen(c));
	cout<<"Output = "<<c;
}
/*
// REVERSE A LINKED LIST USING STACK
#include<iostream>
#include<stack>
using namespace std;

struct node
{
	int data;
	node* next;
};
node* head;

void insert(int data)
{
	node* temp = new node();
	temp->data = data;
	temp->next = head;
	head = temp;
}
void reverse()
{
	if(head==NULL)
	return;
	stack<struct node*> s;
	node* temp = head;
	while(temp != NULL)
	{
		s.push (temp);
		temp = temp->next;
	}
	temp = s.top();
	head = temp;
	s.pop();
	while(!s.empty())
	{
		temp->next = s.top();
		s.pop();
		temp = temp->next;
	}
	  temp->next = NULL;
}
void print()
{
	node* temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
        temp = temp->next;  	
	}
	cout<<endl;
}
int main()
{
	head = NULL;
	insert(2);
	insert(55);
	insert(45);
	insert(23);
    insert(12);
    reverse();
    print();
    
}
*/	


