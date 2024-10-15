#include <iostream>
using namespace std;

class Calculator {
public:
    // Method to perform addition
    double add(double num1, double num2) {
        return num1 + num2;
    }

    // Method to perform subtraction
    double subtract(double num1, double num2) {
        return num1 - num2;
    }

    // Method to perform multiplication
    double multiply(double num1, double num2) {
        return num1 * num2;
    }

    // Method to perform division
    double divide(double num1, double num2) {
        if (num2 == 0) {
            throw runtime_error("Error: Division by zero!");
        }
        return num1 / num2;
    }
};

int main() {
    Calculator calc;
    double num1, num2;
    char operation;

    // User input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    try {
        double result;
        switch (operation) {
            case '+':
                result = calc.add(num1, num2);
                break;
            case '-':
                result = calc.subtract(num1, num2);
                break;
            case '*':
                result = calc.multiply(num1, num2);
                break;
            case '/':
                result = calc.divide(num1, num2);
                break;
            default:
                throw invalid_argument("Error: Invalid operation!");
        }
        cout << "Result: " << result << endl;
    } catch (const exception &e) {
        cout << e.what() << endl;
    }

    return 0;
}
