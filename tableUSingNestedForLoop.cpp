#include <iostream>
using namespace std;

int main() {
    // Loop for each row (from 1 to 5)
    for (int i = 1; i <= 5; i++) {
        // Loop for each column (from 1 to 5)
        for (int j = 1; j <= 5; j++) {
            cout << i << "*" << j <<"=" <<i*j;
        }
        cout << endl;
    }
    
    return 0;
}
