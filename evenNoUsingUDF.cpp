//Create a program with a function that accepts an array of integers and returns the sum of all even numbers in the array
#include<iostream>
using namespace std;
int ArrInt(int num[], int size){
	int sum =0;
	for(int i=0; i < size; i++){
		if(num[i]%2 == 0){
		sum = sum + num[i];	
		}
	}
	return sum;
} 
int main(){
	int size = 5, num[size];
	for(int i =0 ; i < size ; i ++){
	
	cout<<"enter numbers to get the sum of the even no in them";
	cin>>num[i];
}
int result = ArrInt( num, size);
	cout<<"the sum of even no are"<< result;
	return 0;
}
