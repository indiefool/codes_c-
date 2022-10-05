// example 9.1 :- Write a program which initialises a structure and the copy that to another

#include<iostream>
using namespace std;
struct mobile
{
	int mobile_no1;
	float cost;
	
 }  ;
int main()
 {
 	mobile model1 ={2600,3700.00};
 	mobile model2 = {6500,9000.00};
 	model2 = model1;
 	cout<< "The copied mobile model is\n";
 	cout<<"model_no is :"<<model2.mobile_no1<<endl;
 	cout<<"cost is :"<<model2.cost<<endl;
 	
 	return 0;
 }
