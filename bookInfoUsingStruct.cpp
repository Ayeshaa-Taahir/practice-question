//Write a program that defines a structure to hold the details of a book (title, author, and price). Store the details of 3 books in an array of structures and display the book with the highest price.
#include<iostream>
#include<string>
using namespace std;
struct book{
	string title;
	string author;
	double price;
};
int main(){
	book info[3];
	for(int i = 0; i < 3 ; i++){
		cout<<"Enter a titel"<<endl;
		cin>>info[i].title;
		cout<<"Enter author's Name"<<endl;
		cin>>info[i].author;
		cout<<"Enter a price"<<endl;
		cin>>info[i].price;
	}
	int highest=0;
	for(int i = 0; i <3; i++){
	    if(info[i].price > info[highest].price){
	        highest = i;
	    }
	}
	cout << "The book with the highest price is:" << endl;
    cout << "Title: " << info[highest].title << endl;
    cout << "Author: " << info[highest].author << endl;
    cout << "Price: " << info[highest].price << endl;
	return 0;
}
