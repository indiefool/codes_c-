#include<iostream>
using namespace std;

struct node
{
	int data;
	node* next;
};
node* head;//global
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
 	while(temp != NULL)
 	{
 		cout<<temp->data<<" ";
 		temp=temp->next;
	 }
	 cout<<endl;
 }
void del(int n)// Delete node at position n
{
	node* temp1 = head;
	if(n==1)
	{
		head = temp1->next;
		delete (temp1);
		return ;
	}
	int i;
	
	for(i=0;i<n-2;i++)
	{
		temp1 = temp1->next;
	}
	node* temp2 = temp1->next;
	temp1->next = temp2->next;
	delete temp2;
}
int main()
{
	head = NULL;// empty list
	insert(2);
	insert(4);
	insert(6);
	insert(5); // List : 2 4 6 5
	print();
	int n;
	cout<<"Enter a position\n";
	cin>>n;
	del(n);
	print();
}
