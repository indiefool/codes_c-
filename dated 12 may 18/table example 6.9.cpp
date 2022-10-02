// generating table of a number

# include<iostream>
using namespace std;
int main()
{
	int n,i=1,p;
	cout <<"Enter the number whose table you want to claculate"<<endl;
	cin >>n;
	while(i!=11)
	{
	
		cout <<n<<" * "<< i <<"\t =  "<<"\t"<<n*i<<endl;
		i++;
	}

	return 0;
}
