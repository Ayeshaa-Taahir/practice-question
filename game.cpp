#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() {
    srand(time(0)); 
    string choices[] = {"Rock", "Paper", "Scissors"};
    
    int userChoice, computerChoice;
    
    cout << "Rock-Paper-Scissors Game\n";
    cout << "Choose an option:\n";
    cout << "1. Rock\n2. Paper\n3. Scissors\n";
    cout << "Enter your choice (1-3): ";
    cin >> userChoice;

    if (userChoice < 1 || userChoice > 3) {
        cout << "Invalid choice! Please select 1, 2, or 3.\n";
        return 1;
    }

    computerChoice = rand() % 3 + 1;

    cout << "You chose: " << choices[userChoice - 1] << "\n";
    cout << "Computer chose: " << choices[computerChoice - 1] << "\n";

    if (userChoice == computerChoice)
        cout << "It's a tie!\n";
    else if ((userChoice == 1 && computerChoice == 3) ||
             (userChoice == 2 && computerChoice == 1) ||
             (userChoice == 3 && computerChoice == 2))
        cout << "You win!\n";
    else
        cout << "You lose! Try again.\n";

    return 0;
}
