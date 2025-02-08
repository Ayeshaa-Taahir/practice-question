//Write a program to input marks of 10 students, store them in an array, and find the highest and lowest marks
#include<iostream>
using namespace std;
int main()
{
int arrNum[10];
    cout<<"enter a no of 10 students";
	for(int i= 0;i<10;i++){
	cin>>arrNum[i];	
	}   
	int highest = arrNum[0];
	int lowest = arrNum[0];
	for(int i=1;i<10;i++){
	    if(arrNum[i]> highest){
	        highest =  arrNum[i];
	    }if(arrNum[i]< lowest){
	        lowest =  arrNum[i];
	    }
	    
	}
// we print the lowest and hihest marks outside the loop because if we print it inside the loop it will print each and every marks because when it will start to iterate it will print each marks everytime the condition is true
	cout<<"highest"<<highest<<endl;
	cout<<"lowest"<<lowest<<endl;
	     
	return 0;
}
