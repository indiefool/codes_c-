// linked list implementation of queue.

#include<iostream>
using namespace std;

struct node
{
	int data;
	node* next;
};
node* front = NULL;
node* rear = NULL;

void enqueue(int x)
{
	node* temp = new node();
	temp->data = x;
	temp->next = NULL;
	if(front == NULL && rear ==NULL)
	{
		front  = rear = temp;
		return;
	}
	rear->next = temp;
	rear = temp; 
}
void dequeue()
{
	node* temp = front;
	if(front == NULL)
	return;
	if(front == rear)
	{
		front = rear = NULL;
	}
	else
	front = front->next;
	delete temp;
}

void Front()
{
	if(front == NULL)
	{
		cout<<"Queue is empty";
	}
	else
	cout<<front->data;
}
void print()
{
	node* temp = front;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<"\n";
}
int main(){
	/* Drive code to test the implementation. */
	// Printing elements in Queue after each enqueue or Dequeue 
	enqueue(2); print(); 
	enqueue(4); print();
	enqueue(6); print();
	dequeue();  print();
	enqueue(8); print();
}



