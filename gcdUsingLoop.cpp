#include <iostream>
using namespace std;

int main() {
    int num1, num2, gcd;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Ensure num1 is always the larger number
    if (num1 < num2) {
        swap(num1, num2);
    }

    // Calculate GCD using a for loop
    for (int i = 1; i <= num2; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i; // Update GCD if 'i' divides both numbers
        }
    }

    // Output the result
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;

    return 0;
}
