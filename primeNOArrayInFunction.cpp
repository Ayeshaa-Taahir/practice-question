#include <iostream>
using namespace std;
int num[10]={22,24,25,2,23,55,66,32,11,35};
// to check if the no is prime
bool primeNo(int num){
	if ( num <= 1){
		return false;// because one or less than one are not priime no
	}
	for(int i = 2; i*i <= num ; i++){//i=2 because i is the smallest prime no
	if( num % i == 0){
		return false;//because if the remainder is zero it is not a prime no
	}	 
	}	
	return true;
}
// to sum the prime no
int sumOfPrimeNo(){
	int sum = 0;
	for(int i =0 ;i < 10;i++){
	if(primeNo(num[i])){
		sum += num[i];
	}
	}
	return sum;
}
int main(){
	cout <<sumOfPrimeNo();
	return 0;
}
