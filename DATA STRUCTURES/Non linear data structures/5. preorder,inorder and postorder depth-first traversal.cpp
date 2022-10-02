/*Binary tree - Level Order Traversal*/

#include<iostream>
#include<queue>;
using namespace std;

struct node
{
	char data;
	node* left;
	node* right;
};
node* getnewnode(char data)
{
	node* newnode = new node();
	newnode->data = data;
	newnode->left = NULL;
	newnode->right = NULL;
	return newnode;
}
node* insert(node* root,char data){ // empty tree
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
void preorder(node* root)
{
	if(root==NULL)return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void inorder(node* root)
{
	if(root == NULL)
	return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
void postorder(node* root)
{
	if(root==NULL)
	return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
	
}
int main()
{

node* root = NULL; // creating an empty tree.
root = insert(root,'F');
root = insert(root,'D');
root = insert(root,'J');
root = insert(root,'B');
root = insert(root,'E');
root = insert(root,'G');
root = insert(root,'K');
root = insert(root,'A');
root = insert(root,'C');
root = insert(root,'I');
preorder(root);
cout<<endl;
inorder(root);
cout<<endl;
postorder(root);
}

