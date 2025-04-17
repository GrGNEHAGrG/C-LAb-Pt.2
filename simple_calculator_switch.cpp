#include <iostream>
using namespace std;

int main() {
    float num1, num2, result;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Sum: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Difference: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Product: " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Quotient: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed!" << endl;
                return 1;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}
