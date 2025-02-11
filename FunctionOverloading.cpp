#include<iostream>
using namespace std;
int sum(int ,int);
int sum(int,int,int);
double sum(double,double);
int main(){

    cout<<"sum of two integers "<<sum(10,20)<<endl;
    cout<<"product of three integers are "<<sum(2,2,2)<<endl;
    cout<<"product of two integers are "<<sum(3,3)<<endl;
    return 0;
}
int sum(int x ,int y){
    return x+y;
}
int sum(int x ,int y,int z){
    return x*y*z;
}
double sum(double x ,double y){
    return x*y;
}
