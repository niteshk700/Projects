#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice;
    double num1, num2, result;

    cout << "Calculator" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exponentiation" << endl;
    cout << "Enter your choice (1-5): ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (choice) {
        case 1:
            result = num1 + num2;
            cout << "Addition Result: " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "Subtraction Result: " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "Multiplication Result: " << result << endl;
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Division Result: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        case 5:
            result = pow(num1, num2);
            cout << "Exponentiation Result: " << result << endl;
            break;
        default:
            cout << "Error: Invalid choice." << endl;
            break;
    }

    return 0;
}
