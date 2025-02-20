#include <iostream>
#include <string>
using namespace std;

void displayMessage();
int addNumbers(int a, int b);

class Person {
public:
    string name;
    int age;
    
    Person(string n, int a) {
        name = n;
        age = a;
    }
    
    void introduce() {
        cout << "Hi, my name is " << name << " and I am " << age << " years old." << endl;
    }
};

int main() {
    int num1 = 10, num2 = 20;
    double decimalNum = 5.5;
    char letter = 'A';
    string text = "Hello girllllll";
    bool isLearning = true;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    int sum = num1 + num2;
    cout << "Sum: " << sum << endl;
    
    if (sum > 20) {
        cout << "Sum is greater than 20" << endl;
    } else {
        cout << "Sum is 20 or less" << endl;
    }
    
    cout << "Counting from 1 to 5: ";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    displayMessage();
    cout << "Addition using function: " << addNumbers(3, 7) << endl;
    
    Person person1("Ayesha", 18);
    person1.introduce();
    
    return 0;
}

void displayMessage() {
    cout << "This program have all the basics of c++ like structure, udf, conditions and loop" << endl;
}

int addNumbers(int a, int b) {
    return a + b;
}

