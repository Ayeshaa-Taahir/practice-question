//Develop a program that uses a function to check whether a given string is a palindrome or not.
#include<iostream>
#include<string>
using namespace std;
bool palindrome(string str){
	int left =0;
	int right = str.length() - 1;
	while( left < right){
		if(str[left] != str[right]){
			return false;      
		}
		left ++;
right--;
	}
	return true;
}
int main(){
	string str;
	cout<<"enter a string";
	getline(cin, str);
	
	if(palindrome(string str)){
	cout << "\"" << str << "\" is a palindrome." << endl;
    } else {
        cout << "\""<< str << "is not a palindrome ." << endl;
    }
	return 0;
}
