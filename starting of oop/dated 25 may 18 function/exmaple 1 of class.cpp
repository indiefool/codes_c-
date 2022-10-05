// example 1
/* write  a program which reads two numbers ,calculate the smallest one and print the smallest one using object oriented programming */
#include<iostream>
using namespace std;

class num
{
	int n1,n2;
	
	public :
	        void getdata();
			void showdata();	
 }smallest;
 
 void num :: getdata()
 {
 	cout<<"Enter the two numbers \n";
 	cin >> n1>>n2;
 	
 }
 void num :: showdata()
 {
 	if(n1>n2)
 	cout<<n1<<" is greater than "<<n2;
 	else
 	cout<<n2<<" is greater than "<<n1;
 }
 int main()
 {
 	
 	smallest.getdata();
 	smallest.showdata();
 	
 	return 0;
 }
