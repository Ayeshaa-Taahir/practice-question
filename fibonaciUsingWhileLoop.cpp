#include <iostream>
using namespace std;

int main() {
    int n;
    int t1 = 0, t2 = 1, nextTerm = 0;

    // Prompt the user to enter the number of terms
    cout << "Enter the number of terms for the Fibonacci series: ";
    cin >> n;

    cout << "Fibonacci Series up to " << n << " terms: ";

    // Handle the first two terms separately
    if (n >= 1) {
        cout << t1 << " "; // Print the first term
    }
    if (n >= 2) {
        cout << t2 << " "; // Print the second term
    }

    // Generate the remaining terms using a while loop
    int count = 3; // Start from the 3rd term
    while (count <= n) {
        nextTerm = t1 + t2; // Calculate the next term
        cout << nextTerm << " "; // Print the next term

        // Update the values of t1 and t2 for the next iteration
        t1 = t2;
        t2 = nextTerm;

        count++; // Increment the term count
    }

    cout << endl; // Move to the next line after printing the series
    return 0;
}
