#include <iostream>
using namespace std;

int main() {
    double number1, number2;
    char operation;

    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> number2;

    switch (operation) {
        case '+':
            cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
            break;
        case '-':
            cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;
            break;
        case '*':
            cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;
            break;
        case '/':
            if (number2 != 0) {
                cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;
            } else {
                cout << "Cannot divide by zero." << endl;
            }
            break;
        default:
            cout << "Invalid operator." << endl;
    }

    return 0;
}
