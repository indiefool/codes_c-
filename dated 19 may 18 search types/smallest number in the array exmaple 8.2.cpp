#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the value of n\n";
  cin >>n;
  int a1[n];
  int i;
  for( i=0;i<n;i++)
  cin>>a1[i];
  int min=a1[0];
  for(i=0;i<n;i++)
  {
  	if(min>a1[i])
  	min=a1[i];
  }
  cout<<"The smallest number in the array is "<<min;
	return 0;
}
