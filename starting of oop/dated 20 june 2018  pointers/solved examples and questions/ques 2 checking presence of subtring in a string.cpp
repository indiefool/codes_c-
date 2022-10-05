/*#include<iostream> // This program is wrong.....
using namespace std;

int main()
{
	char name[50] = {"PRASHANT"};
	char p[20] = {"ANTS"};
	char c[10];
	
	int i,j=0,k,f=0;
	for(i=0;i<80;i++)
	{
		
		if(p[j]==a[i])
		{    
		     k =i;
			j++;
			while(a[i++]!='\0')
			{
				if(p[j]==a[i])
				{
				  c[f] = a[i];
				  f++;
				continue;
			    }
				else
				{
				k=i;
				j=0;
				break;
			    }
	}
			  if(c[f-1] == 'A')
			  {
			    cout<<"substring is present ";
			    break;
			  }
		}
	}
	
}
*/
#include<iostream>
using namespace std;

int main( )
{
    char str1[80], str2[80];
	
    cout<<"Enter first string: ";
    cin.getline(str1, 80);
	
    cout<<"Enter second string: ";
    cin.getline(str2, 80);

    int l = 0; //Hold length of second string
    
    //finding length of second string
    for(l = 0; str2[l] != '\0'; l++);

    int i, j;
    
    for(i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++)
    {
        if(str1[i] == str2[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    if(j == l)
        cout<<"Substring found at position "<< i - j + 1;
    else
        cout<<"Substring not found";
	
    return 0;
}
