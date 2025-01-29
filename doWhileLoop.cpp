#include <iostream>
using namespace std;

int main() {
    int score;
    int sum = 0;
    int count = 0;
    double average;

    cout << "Enter student scores (enter -1 to stop):" << endl;
    do {
        cout << "Enter score: ";
        cin >> score;

        if (score != -1) {
            sum += score;
            count++;
        }
    } while (score != -1);

    if (count > 0) {
        average = static_cast<double>(sum) / count;
        cout << "The average score is " << average << endl;
    } else {
        cout << "No scores were entered" << endl;
    }

    return 0;
}
