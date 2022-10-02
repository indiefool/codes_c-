#include<iostream>
using namespace std;

struct node
{
	int data;
	node* next;
};
node* head; 
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

 void print() // print all elements in the list
 {
 	node* temp = head;
 	while(temp->next != NULL)
 	{
 		cout<<temp->data<<" ";
 		temp=temp->next;
	 }
	 cout<<endl;
 } 
 void reverse()
{
 node* current,*prev,*next;
 current = head;
 prev = NULL;
 while(current != NULL)
 {
 	next = current->next;
 	current->next = prev;
 	prev = current;
 	current = next;
	 }	
	 head = prev;
}       
 

int main()
{
	 head = NULL;
	 insert(2);
	 insert(4);
	 insert(6);
	 insert(8);
	 print();
	 reverse();
	 print();
}

