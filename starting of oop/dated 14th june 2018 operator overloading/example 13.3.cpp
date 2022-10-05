 //Example 13.3 :- unary operator example
 
 #include<iostream>
 using namespace std;
 
 
 class counter
 {
 	int count;
 	
 	public :
 		counter()
 		{
 			count = 4; 
		 }
		 void operator ++() // overloaded
		 {
		 	++count;
		 }
		 void operator --() // overloaded
		 {
		 	--count;
		 }
		 void operator -() // overloaded
		 {
		 	count = -count;
		 }
		 void showdata()
		 {
		 	cout<<count<<endl;
		 }
 };
 int main()
 {
 	counter c1,c2,c3;
 	++c1;
 	--c2;
 	-c3;
 	c1.showdata();
 	c2.showdata();
 	c3.showdata();
 }
