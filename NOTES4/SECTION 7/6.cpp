#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter first number, operator, second number: ";
    cin >> a >> op >> b;

    switch (op) {
        case '+':
            cout << "Result is: " << a + b << endl;
            break;
        case '-':
            cout << "Result is: " << a - b << endl;
            break;
        case '*':
            cout << "Result is: " << a * b << endl;
            break;
        case '/':
            if (b == 0) {
                cout << "Error: Division by zero!" << endl;
            } else {
                cout << "Result is: " << a / b << endl;
            }
            break;
        default:
            cout << "Invalid operator" << endl;
    }

    return 0;
}
