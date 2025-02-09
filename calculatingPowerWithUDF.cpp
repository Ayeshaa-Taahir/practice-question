//Write a program to calculate the power of a number using a user-defined function (pow(base, exponent)).
#include<iostream>
using namespace std;
double power(double base , double exponent){
	double result;
	for(int i = 0 ; i < exponent ; i ++){
		result *= base; 
	}
	return result;
}
int main (){
	double base, exponent;
	cout<<"enter a base ";
	cin>>base;
	cout<<"enter a expoxnent ";
	cin>>exponent;
	 cout << base << " raised to the power of " << exponent << " is: " << power(base, exponent) << endl;
	return 0;
}
