 //Linked list : Inserting a node at the beginning of the linked list.
 #include<iostream>
 using namespace std;
 struct node
 {
 	int data;
 	node* next;
 };
 node* head; //Global variable,can be accessed anywhere.
 void insert(int x)
 {
 	node* temp = new node();
 	temp->data = x;
 	temp->next = head;
 	head = temp;
 	
 }
 void print()
 {
 	
 	node* temp =head;
 	cout<<"List is : ";
 	while(temp !=NULL)
 	{
 		cout<<temp->data<<" ";
 		temp=temp->next;
	 }
	 cout<<endl;
 }
 int main()
 {
   head = NULL;//empty list; 
   cout<<"How many numbers\n";
   int n,i,x;
   
   cin>>n;
   for(i=0;i<n;i++)
   {
   	cout<<"Enter the number\n";
   	cin>>x;
   	insert(x);
   	print();
   }
}
