#include <iostream>
using namespace std;

struct Game {
    int numbers[5];
};

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

bool isSorted(Game game) {
    for (int i = 0; i < 4; i++) {
        if (game.numbers[i] > game.numbers[i + 1]) {
            return false;
        }
    }
    return true;
}

void displayNumbers(Game game) {
    for (int i = 0; i < 5; i++) {
        cout << game.numbers[i] << " ";
    }
    cout << endl;
}

void playGame() {
    Game game = {{3, 1, 4, 5, 2}};
    int pos;

    cout << "Arrange the numbers in ascending order by swapping adjacent numbers!\n";
    
    while (!isSorted(game)) {
        displayNumbers(game);
        cout << "Enter position (1-4) to swap with next number: ";
        cin >> pos;

        if (pos >= 1 && pos <= 4) {
            swap(game.numbers[pos - 1], game.numbers[pos]);
        } else {
            cout << "Invalid position! Try again.\n";
        }
    }

    cout << "Congratulations! You sorted the numbers.\n";
}

int main() {
    playGame();
    return 0;
}
