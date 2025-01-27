#include<iostream>
using namespace std;
//for function 1 :to generate a table
void solve(int num){
	cout<<"multiplication of"<<num<<endl;
	for(int i=1; i<= 10; i++){
		cout<<num<<"X"<<i<<"="<<num*i;
	}
}
//function 2: pass three float values amd compute sum of square
void solve(float a, float b, float c){
	float result;
	result = a*a+b*b+c*c;
	cout <<result;
}
//function 3: average
float solve(int a , int b,int c,int d){
	float average =  a + b+ c+ d/4;
	return average;
	
}
//function 4 : solve by using fuction template
template <typename T>
void solve(T a,T b,T c ){
	T result = a*a + b*b+c*c;
	cout<<result;
}
int main(){
	int num =5;
	solve(num);
	solve(3.4,2.3,5.5);
	int a =23, b= 55, c = 97, d =76;
	solve(a,b,c,d);
	
	solve(1,2,3);// for integers
	solve(8.8, 9.9,8.9);
	return 0;
}
