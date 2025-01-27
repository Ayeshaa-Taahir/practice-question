// 2.	Create a program that accepts a list of student scores, stops taking input when the user enters -1, and calculates the average score. Use a do-while loop.
#include<iostream>
using namespace std;
int main(){
	int score,sum=0,count;
	do{
		cout<<"enter your score until last press-1"<<endl;
		cin>>score;
		if(score!=0){
		sum =sum += score;
			count++;
		}
		
	}while(score!=-1);
	int result;
	result = sum / count;
	cout <<"the average no is "<<result; 
	return 0;
}
