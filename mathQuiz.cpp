#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() {
    srand(time(0)); 
    int num1 = rand() % 10 + 1; 
    int num2 = rand() % 10 + 1; 
    int userAnswer, correctAnswer;

    cout << "Math Quiz Game";
    cout << "Solve the following problem ";
    cout << num1 << " + " << num2 << " = ";
    cin >> userAnswer;

    correctAnswer = num1 + num2;

    if (userAnswer == correctAnswer)
        cout << "Correct! Well done ";
    else
        cout << "Incorrect. The correct answer is " << correctAnswer;

    return 0;
}

