#include <iostream>
using namespace std;
int main() {
    int number;
    bool isPrime = true;

    // Prompt the user to enter a number
    cout << "Enter a positive integer: ";
    cin >> number;

    // Check if the number is less than 2 (not prime)
    if (number < 2) {
        isPrime = false;
    } else {
        // Use a for loop to check divisibility
        for (int i = 2; i <= number / 2; ++i) {
            if (number % i == 0) {
                isPrime = false;
                break; // Exit the loop if a divisor is found
            }
        }
    }
    // Output the result
    if (isPrime) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}
