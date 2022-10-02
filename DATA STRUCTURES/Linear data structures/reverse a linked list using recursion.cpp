#include<iostream>
using namespace std;
struct node
{
	int data;
	node* next;
};
node* head;//Global variable
void insert(int data)// insert an integer at end of list
{
	node* temp1 = new node();
	 
	temp1->data = data;
	temp1->next = NULL;
	 if(head == NULL)
	 {
	 	head = temp1;
	 	return;
	  } //will check if list is empty
	  node* ptr = head;
	  while(ptr->next != NULL)
	  {
	  	ptr = ptr->next;
	  }// will find the last element of the linked list
	  
	  ptr->next = temp1;
	
}
void reverse(node* p)
{
	if(p->next == NULL)//Exit condition 
	{
		head = p;
		return ;
	}
	reverse(p->next);
	node* q = p->next;
	q->next = p;
	p->next=NULL;
	
	
}
void print() // print all elements in the list
 {
 	node* temp = head;
 	while(temp != NULL)
 	{
 		cout<<temp->data<<" ";
 		temp=temp->next;
	 }
	 cout<<endl;
 }
int main()
{
	head = NULL;// empty list
	insert(2);
	insert(4);
	insert(6);
	insert(5);
	 
	reverse(head);
	print();
	
}
