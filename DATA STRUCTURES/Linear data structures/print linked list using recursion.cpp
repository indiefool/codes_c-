#include<iostream>// Here we will just print the list in reverse order.
using namespace std;
struct node
{
	int data;
	node* next;
};
node* insert(node* head,int data)// insert an integer at end of list
{
	node* temp1 = new node();
	 
	temp1->data = data;
	temp1->next = NULL;
	 if(head == NULL) //will check if list is empty
	 {
	 	head = temp1;
	 	return head;
	  } 
	  node* ptr = head;
	  while(ptr->next != NULL) // will find the last element of the linked list
	  {
	  	ptr = ptr->next;
	  }
	  
	  ptr->next = temp1;
	  return head;
	
}
void print(node* p)
{
	if(p==NULL)
	return ; // exit condition.
	
	print(p->next); //recursive call.
	cout<<p->data<<" "; 
}
int main()
{
	node* head = NULL ; // local variable
	head = insert(head,2);
	head = insert(head,4);
	head = insert(head,6);
	head = insert(head,5);
	print(head);
}
