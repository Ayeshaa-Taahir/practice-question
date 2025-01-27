// 1.	Write a program to find the factorial of a number entered by the user. Use a while loop to calculate the factorial

#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter a no to factorial ";
	cin>>num;
	if(num<=0)
	{
		cout<<"number is negative "<<num;
		
	}else{
		int factorial =1;
		int i =1;
		while(i<=num){
			factorial*=i;
			i++;
		}
		cout<<"the factorial no is "<<num<<"is"<<factorial;
	
	}

	return 0;
	
}
