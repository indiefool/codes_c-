/* NOTE :-
           IF WE DEFINE A UNION WITHOUT A NAME OR TAG THAT IS CALLED ANONYMOUS UNION.
           the syntax is 
                           union
                           {
                             data type 1 ;
                             .............
                             ............
                             .........
                             ..
                             .
                        }
            IN ANONYMOUS UNION THE MEMBER CAN BE ACCESSED DIRECTLY BY THEIR NAME */
#include<iostream>
using namespace std;
int main()
{
	union
	{
		int n1;
		float n2;
	};
	cout<<"Enter integer number :";
	cin>>n1;
	cout <<"Enter flaot number :";
	cin>>n2;
	
	cout<<"n1 = "<<n1<<endl;
	cout<<"n2 = "<<n2<<endl;
	
	return 0;
}
