#include <iostream>
using namespace std;

string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

string convertToWords(int num) {
    if (num == 0) return "Zero";
    
    string result = "";
    
    string parts[4];
    int index = 0;
    
    if (num >= 1000) {
        parts[index++] = ones[num / 1000] + " Thousand";
        num %= 1000;
    }
    
    if (num >= 100) {
        parts[index++] = ones[num / 100] + " Hundred";
        num %= 100;
    }
    
    if (num >= 20) {
        parts[index++] = tens[num / 10];
        num %= 10;
    }
    
    if (num > 0) {
        parts[index++] = ones[num];
    }
    
    for (int i = 0; i < index; i++) {
        result += parts[i] + " ";
    }
    
    return result + "Rupees";
}

int main() {
    int amount;
    cout << "Enter amount in PKR: ";
    cin >> amount;
    
    cout << "Amount in words: " << convertToWords(amount) << endl;
    
    return 0;
}

