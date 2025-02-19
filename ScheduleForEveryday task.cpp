#include <iostream>
#include <ctime>
using namespace std;

void displaySchedule(int hour) {
    if (hour >= 6 && hour < 9) {
        cout << "Good morning! Time for breakfast." << endl;
    } else if (hour >= 12 && hour < 14) {
        cout << "It's lunchtime! Have a healthy meal." << endl;
    } else if (hour >= 19 && hour < 21) {
        cout << "Time for dinner! Enjoy your meal." << endl;
    } else if (hour >= 22 || hour < 6) {
        cout << "It's bedtime! Get some rest." << endl;
    } else if (hour % 2 == 0) {
        cout << "Reminder: Stay hydrated! Drink some water." << endl;
    } else {
        cout << "Take a break and relax." << endl;
    }
}

int main() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int currentHour = ltm->tm_hour;
    
    displaySchedule(currentHour);
    
    return 0;
}
