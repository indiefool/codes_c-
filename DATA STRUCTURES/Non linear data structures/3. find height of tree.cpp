#include<iostream>
using namespace std;

struct bstnode
{
	int data;
	bstnode* left;
	bstnode* right;
};

int findheight(bstnode* root){
	if(root == NULL)
	return -1;
	return max(findheight(root->left),findheight(root->right)) + 1;
}



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
root = insert(root,25);
root = insert(root,25);
root = insert(root,252);
root = insert(root,2635);
root = insert(root,26);
int c = findheight(root);
cout<<c<<endl;

}
