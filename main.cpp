#include <iostream>

using namespace std;

int main() {
    char op;
    double num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    switch (op) {
        case '+':
            cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            break;
        default:
            cout << "Error: Invalid operator chosen!" << endl;
            break;
    }
    return 0;
}
