#include<iostream>
using namespace std;

struct node
{
  int data;
  node* left;
  node* right;	
};
node* getnewnode(int data)
{
	node* newnode = new node();
	newnode->data = data;
	newnode->left = NULL;
	newnode->right = NULL;
	return newnode;
}
node* insert(node* root,int data){ // empty tree
	if(root == NULL)
	{
		root = getnewnode(data);
		
	}
	else if(data <= root->data)
	{
		root->left = insert(root->left,data);
	}
	else{
		root->right = insert(root->right,data);
	}
	return root;
}
bool isbstutil(node* root,int minvalue,int maxvalue)
{

	if(root==NULL)return true;
	
	
	if(root->data > minvalue && root->data < maxvalue && isbstutil(root->left,minvalue,root->data) && isbstutil(root->right,root->data,maxvalue))
	{
		return true;
		
	}
	else
	return false;
}


bool isbinarysearchtree(node* root)
{

	return isbstutil(root,INT_MIN,INT_MAX);
}

int main()
{

node* root = NULL; // creating an empty tree.
root = insert(root,250);
root = insert(root,10);
root = insert(root,20);
root = insert(root,200);
root = insert(root,201);
root = insert(root,203);
root = insert(root,205);
root = insert(root,2078);
isbinarysearchtree(root);

}
