#include<iostream>
using namespace std;
int main(){
	
	int row,column,arr[10][10];
	cout<<"enter no of rows and column";
	cin>>row>>column;
	//for total element calculation
cout<<"enter " <<row*column<<"array element";
	for(int i=0; i<row; i++){
		for(int j =0; j<column ; j++){
			cin>>arr[i][j];
			
		}
	} 
		for(int i=0; i<row; i++){
		for(int j =0; j<column ; j++){
			cout<<arr[i][j];
			
		}
	} 
	return 0;
	
}
