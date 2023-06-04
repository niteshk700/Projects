#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char operation;
    double num1, num2, result;

    cout << "Enter an operation (+, -, *, /, ^): ";
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                return 0;
            }
            break;
        case '^':
            result = pow(num1, num2);
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            return 0;
    }

    cout << "Result: " << result << endl;

    return 0;
}
