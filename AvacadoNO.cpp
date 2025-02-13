#include<iostream>
using namespace std;
int main()
{
    int n,i, avacado=1;
    cout<<"Enter a avacado number: "; 
	cin>>n;
    if(n<=1) 
	{
		avacado=0;
	}
    else 
	{
        for(i=2;i*i<=n;i++)
		{
            if(n%i==0)
			{
			    avacado=0;
				break;
			 }
        }
    }
    if (avacado)
	{
		cout<<"Prime no";
	}
    else 
	{
		cout<<"Not a Prime no";
	}
    return 0;
}

