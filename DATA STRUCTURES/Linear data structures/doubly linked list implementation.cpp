/*HERE 4 FUNCTIONS WILL BE MADE :-
1. InsertAtHead();
2. InsertAtTail();
3. Print();
4. ReversePrint();
*/
#include<iostream>
using namespace std;

struct node
{
	int data;
	node* next;
	node* prev;
};
node* head; // global variable - pointer to head node.
node* GetNewNode(int x)
{
	node* newnode = new node();
	newnode->data = x;
	newnode->prev = NULL;
	newnode->next = NULL;
	return newnode;
}
void InsertAtHead(int x)
{
	node* temp = GetNewNode(x);
	if(head == NULL)
	{
		head = temp;
		return ;
	}
	head->prev = temp;
	temp->next= head;
	head = temp;
}
//Inserts a Node at tail of Doubly linked list
void InsertAtTail(int x) {
	 node* temp = head;
	 node* newNode = GetNewNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	while(temp->next != NULL) temp = temp->next; // Go To last Node
	temp->next = newNode;
	newNode->prev = temp;
}
void print()
{
	node* temp = head;
	cout<<"Forward : ";
	while(temp!= NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"\n";
}
void reverseprint()
{
	node* temp = head;
	if(temp == NULL)
	{
		return;//empty list,exit
	}
	//Going to the last node
	while(temp->next != NULL)
	{
		temp=temp->next;
	}
	//Traversing backward using prev pointer
	cout<<"Reverse : ";
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->prev;
	}
	cout<<"\n";
}
int main()
{
	head =NULL;//empty list
	InsertAtHead(2);print();reverseprint();
	InsertAtHead(4);print();reverseprint();
	InsertAtHead(6);print();reverseprint();
	
	
}
