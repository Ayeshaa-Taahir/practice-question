#include <iostream>
using namespace std;
int main() {
    int arr1[5], arr2[5], merged[10];
    cout << "Enter 5 elements for the first array: ";
    for (int i = 0; i < 5; i++) {
        cin>>arr1[i];
    }
    // Input for the second array
    cout << "Enter 5 elements for the second array: ";
    for (int i = 0; i < 5; i++) {
        cin >>arr2[i];
    }
    // Merging both arrays into merged array
    for (int i = 0; i < 5; i++) {
        merged[i] = arr1[i];
        merged[i + 5] = arr2[i];
    }
    for (int i = 0; i < 9; i++) {           // Outer loop for passes
        for (int j = 0; j < 9 - i; j++) {   // Inner loop for comparisons
            if (merged[j] > merged[j + 1]) {
        // Swap elements if they are in the wrong order
        int temp=merged[j];
        merged[j]=merged[j + 1];
        merged[j+1]=temp;
        }
    }
}
    // Displaying the sorted merged array
    cout << "Merged and sorted array: ";
    for (int i = 0; i < 10; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;
    return 0;
}
