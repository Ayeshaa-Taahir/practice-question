//Create a program that uses a structure to represent a complex number (real and imaginary parts). Accept two complex numbers and perform addition.
#include<iostream>
using namespace std;
struct complex{
    double real;
    double imag; 
};
complex add(complex num1, complex num2){
    complex result;
    result.real = num1.real +num2.real;
    result.imag = num1.imag +num2.imag;
    return result;
}
int main(){
    complex num1, num2, sum;
   
    cout<<"enter a real no 1"<<endl;
    cin>>num1.real;
    cout<<"enter a imaginary no 1"<<endl;
    cin>>num1.imag;
    cout<<"enter a real no 2"<<endl;
    cin>>num2.real;
    cout<<"enter a imaginary no 2"<<endl;
    cin>>num2.real;
    sum =add(num1,num2);
cout << "The sum of the two complex numbers is: ";
    cout << sum.real << " + " << sum.imag << "i" << endl;
    return 0;
}
