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
void levelorder(node* root){
	if(root == NULL)
	return;
	queue<node* >Q;
	Q.push(root);
	//while there is at least one discovered node
	while(!Q.empty()){
	node* current = Q.front();
	cout<<current->data<<" ";
	if(current->left!=NULL)Q.push(current->left);
	if(current->right!=NULL)Q.push(current->right);
	Q.pop();	// removing the element at front
	}
}
int main()
{

node* root = NULL; // creating an empty tree.
root = insert(root,'h');
root = insert(root,'k');
root = insert(root,'b');
root = insert(root,'k');
root = insert(root,'v');
root = insert(root,'p');
levelorder(root);
}

