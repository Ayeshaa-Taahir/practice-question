//Develop a program that defines a structure for storing employee data (ID, name, salary). Accept details for 3 employees and display the highest salary.
#include<iostream>
#include<string>
using namespace std;
struct employee{
	int id;
	string name;
	double salary;
};
int main(){
	employee Employees[3];
	cout <<"enter details of three employees , such as id, name, salary to know which one has the higest salary "<<endl;
	for(int i =0; i < 3; i++){
		cout<<"name :";
		cin>> Employees[i].name;
		cout<<"id :";
		cin>>Employees[i].id;
		cout<<"salary :";
		cin>>Employees[i].salary;
	}
	int highSalary=0;
	for(int i =0 ; i < 3 ; i++){
	    if(Employees[i].salary > Employees[highSalary].salary){
	        highSalary = i;
	    }
	}
	cout << "Employee with the highest salary:" << endl;
    cout << "Name: " << Employees[highSalary].name << endl;
    cout << "ID: " << Employees[highSalary].id << endl;
    cout << "Salary: " << Employees[highSalary].salary << endl;

	return 0;
}
