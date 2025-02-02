#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;
    // dynamically allocate an array of size n
    int* arr = new int[n];
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "\nPairs whose product is even:" << endl;
    // Nested loop to check every pair (i, j) with i < j
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // A product is even if at least one of the numbers is even.
            if ((arr[i] % 2 == 0) || (arr[j] % 2 == 0)) {
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
            }
        }
    }
    // free the dynamically allocated in memory
    delete[] arr;
    return 0;
}
