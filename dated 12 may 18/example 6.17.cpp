# include<iostream>
using namespace std;
int main()
{
  int n,num;
  cout << "Enter a number ";
  cin >> n;
  num=n;
  int sum=0,c=0;
  do
  {
  	sum=sum+n%10;
  	n=n/10;
  	c++;
  }
  while(n>0);
  cout << "Number of digit is the "<<num;
  cout <<" are :"<<c<<endl;
  cout << " sum of digit : "<<sum<< endl;
	return 0;
}
