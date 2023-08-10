#include <iostream>
using namespace std;

int main() 
{
    char operation;
    double num1, num2, result;

    cout << "Simple Calculator" << endl;
    cout << "Enter an operation (+, -, *, /): ";
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
            if (num2 != 0)
                result = num1 / num2;
            else {
                cout << "Error: Cannot divide by zero!" << endl;
                return 1;
            }
            break;
        default:
            cout << "Error: Invalid operation!" << endl;
            return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}
