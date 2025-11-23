#include <iostream>
#include <cmath>
using namespace std;

class Calculator {
public:
    double add(double a, double b) {
        return a + b;
    }
    
    double subtract(double a, double b) {
        return a - b;
    }
    
    double multiply(double a, double b) {
        return a * b;
    }
    
    double divide(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
    
    int modulo(int a, int b) {
        if (b != 0) {
            return a % b;
        } else {
            cout << "Error: Modulo by zero!" << endl;
            return 0;
        }
    }
    
    double power(double base, double exponent) {
        return pow(base, exponent);
    }
};

int main() {
    Calculator calc;
    double num1, num2;
    int choice;
    
    cout << "=== Basic Calculator ===" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Modulo" << endl;
    cout << "6. Power" << endl;
    cout << "Enter your choice (1-6): ";
    cin >> choice;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    switch(choice) {
        case 1:
            cout << "Result: " << calc.add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result: " << calc.subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Result: " << calc.multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "Result: " << calc.divide(num1, num2) << endl;
            break;
        case 5:
            cout << "Result: " << calc.modulo((int)num1, (int)num2) << endl;
            break;
        case 6:
            cout << "Result: " << calc.power(num1, num2) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}
