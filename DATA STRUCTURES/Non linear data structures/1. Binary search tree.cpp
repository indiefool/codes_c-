#include<iostream>
using namespace std;

struct bstnode
{
  int data;
  bstnode* left;
  bstnode* right;	
};
bstnode* getnewnode(int data)
{
	bstnode* newnode = new bstnode();
	newnode->data = data;
	newnode->left = NULL;
	newnode->right = NULL;
	return newnode;
}
bstnode* insert(bstnode* root,int data){ // empty tree
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
bool search(bstnode* root,int data)
{
	if(root == NULL)
	return false;
	else if(root->data == data)
	return true;
	else if(data <= root->data)return search(root->left,data);
	else return search(root->right,data);
	
}

int main()
{

bstnode* root = NULL; // creating an empty tree.
root = insert(root,15);
root = insert(root,10);
root = insert(root,20);

int number;
cout<<"Enter a number to be searched\n";
cin>>number;
if(search(root,number)== true)cout<<"Found\n";
else cout<<"Not found\n";
}


