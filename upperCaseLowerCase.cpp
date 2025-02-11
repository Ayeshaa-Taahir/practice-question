#include <iostream>
using namespace std;

int main() {
    char arr[30] = {}; 
    cout << "Enter a name: ";
    cin.getline(arr, 30); 

    // Toggle case for each character
    for(int i = 0; arr[i] != '\0'; i++) {
        if(arr[i] >= 'A' && arr[i] <= 'Z') {
            arr[i] += 32; 
        } else if(arr[i] >= 'a' && arr[i] <= 'z') {
            arr[i] -= 32; 
        } 
    }
   cout << "name " << arr << endl;
    
    return 0;
}

