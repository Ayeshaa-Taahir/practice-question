#include<iostream>
using namespace std;
int main() 
{
    string str;
    cout<<"Enter a string "; 
	getline(cin, str);
    for (int i=0;str[i]!='\0';i++) 
	{
        if (str[i]>='a' && str[i]<='z')
		{
			str[i]-=32;
		} 
        else if (str[i]>='A' && str[i]<='Z') 
		{
			str[i]+=32;
		}
    }
    cout<<"After Conversion "<<str<<endl;
    return 0;
}
