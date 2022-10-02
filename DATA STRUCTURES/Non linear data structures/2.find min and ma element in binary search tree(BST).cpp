#include<iostream>
using namespace std;

struct bstnode
{
	int data;
	bstnode* left;
	bstnode* right;
};

int findmin(bstnode* root){
	if(root == NULL)
	{
		cout<<"Error : Tree is Empty\n";
		return -1;
	}
	
	while(root->left != NULL) // NOTE : root here is a local variable and this root will not change the root of the main function.
	{
		root = root->left;
	}
	return root->data;
}
/*
// the function findmin can be made using recursion also ,
int findmin(bstnode* root)
{
if(root == NULL)
{
cout<<"Error : Tree Is Empty\n";
return -1;
}
else if(root->left == NULL)
{
return root->data;
}
// Search in left subtree.
return findmin(root->left);
}
 */   
int findmax(bstnode* root){
	if(root == NULL)
	{
		cout<<"Error : Tree Is Empty\n";
		return -1;
	}
		while(root->right != NULL) // NOTE : root here is a local variable and this root will not change the root of the main function.
	{
		root = root->right;
	}
	return root->data;
}
/*
// the function findmax can be made using recursion also ,the recursive function is written below.
int findmax(bstnode* root)
{
if(root == NULL)
{
cout<<"Error : Tree Is Empty\n";
return -1;
}
else if(root->right == NULL)
{
return root->data;
}
// Search in left subtree.
return findmax(root->right);
}
 */ 
 
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


int main()
{

bstnode* root = NULL; // creating an empty tree.
root = insert(root,15);
root = insert(root,10);
root = insert(root,20);
root = insert(root,300);

int min = findmin(root);
int max = findmax(root);

cout<<"Min element is "<<min<<endl;
cout<<"Max element is "<<max<<endl;

}
 
