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
	newnode->right= NULL;
	return newnode;
}
node* insert(node* root,int data)
{
	if(root == NULL)
	root = getnewnode(data);
	else if(data <= root->data)
	{
	root->left = insert(root->left,data);
    }
    else
    root->right = insert(root->right,data);
    
    return root;
}
// Function to find data in the tree.
node* find(node* root,int data)
{
 if(root == NULL)return NULL;
 else if(root->data == data) return root;
 else if(root->data < data) return find(root->right,data);
 else return find(root->left,data);
}
//Function to find node with minimum value in BST
node* findmin(node* root)
{
	if(root == NULL)
	return NULL;
	else
	while(root->left != NULL)
	root = root->left;
	
	return root;
}
//Function to find Inorder successor in a BST.
node* getsuccessor(node* root,int data)
{
	// search the node - O(h)
	node* current = find(root,data);
	if(current == NULL) return NULL;
	// Case 1 : Node has right subtree.
	if(current -> right != NULL){
		return findmin(current->right); //O(h)
	}
	else{
		// Case 2: No right subtree -O(h)
		node* successor = NULL;
		node* ancestor = root;
		while(ancestor != current)
		{
			if(current->data < ancestor->data)
			{
				successor = ancestor; // so far this is the deepest node for which current node is in left;
				ancestor  = ancestor->left;
			}
			else
			
			ancestor = ancestor->right;
		}
		return successor;
	}
}
// Function to visit nodes in Inorder
void inorder(node* root)
{
	if(root==NULL)
	return ;
	else
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
int main() {
	/*Code To Test the logic
	  Creating an example tree
	            5
			   / \
			  3   10
			 / \   \
			1   4   11
    */
	node* root = NULL;
	root = insert(root,5); root = insert(root,10);
	root = insert(root,3); root = insert(root,4); 
	root = insert(root,1); root = insert(root,11);

	//Print Nodes in Inorder
	cout<<"Inorder Traversal: ";
	inorder(root);
	cout<<"\n";
	
    // Find Inorder successor of some node.
    node* successor = getsuccessor(root,4);
    if(successor == NULL)cout<<"no successor found\n";
    else
    cout<<"successor is "<<successor->data<<"\n";
	
}
