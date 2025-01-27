#include<iostream>
using namespace std;
void num(int a , int b);
int main(){
	int a,b;
	cout<<"enter a no";
	cin>>a>>b;
     num(a,b);
	return 0;
}
void num(int a, int b){
	cout << a-b;	
}
