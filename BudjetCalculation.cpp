#include <iostream>
using namespace std;

int main() {
    int choice, members;
    double budget, perMemberContribution;
    
    cout << "Select purpose of contribution:\n";
    cout << "1. Party" <<endl;
	cout<<  "2. Event" <<endl;
	cout << "3. Trip" <<endl; 
	cout << "4. Business" << endl;
	cout << "5. Charity" <<endl;
    cout << "Enter your choice (1-5): ";
    cin >> choice;
    
    if (choice < 1 || choice > 5) {
        cout << "Invalid choice. Exiting program." << endl;
        return 1;
    }
    
    cout << "Enter number of members contributing: ";
    cin >> members;
    
    if (members <= 0) {
        cout << "Invalid number of members. Exiting program." << endl;
        return 1;
    }
    
    cout << "Enter total budget (in PKR): ";
    cin >> budget;
    
    if (budget <= 0) {
        cout << "Invalid budget amount. Exiting program." << endl;
        return 1;
    }
    
    perMemberContribution = budget / members;
    
    cout << "Each member has to contribute: " << perMemberContribution << " PKR" << endl;
    
    return 0;
}

