#include<iostream>
using namespace std;

struct node
{
	int data;
	node* link;
};
node* a;
a = NULL;//empty list;
node* temp = new node;// new node means the same as (node*)malloc(sizeof(node));    

temp->data = 2;
temp->link = NULL;

a = temp; 

temp = new node();
temp->data = 4;
temp -> link = NULL;

node* temp1 = a;

while(temp1 -> link != NULL)
{
	temp1 = temp1->link;
}
temp1->link = NULL;

