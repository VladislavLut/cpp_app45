#include <iostream>
using namespace std;

void add(int* a, int* b, int* result) {
    *result = *a + *b;
}

void subtract(int* a, int* b, int* result) {
    *result = *a - *b;
}

void multiply(int* a, int* b, int* result) {
    *result = *a * (*b);
}

void divide(int* a, int* b, float* result) {
    if (*b != 0) {
        *result = static_cast<float>(*a) / (*b);
    }
    else {
        cout << "Error: Division by zero!" << endl;
    }
}

int main() {
    int num1, num2;
    char op;
    int resultInt;
    float resultFloat;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter operation (+, -, *, /): ";
    cin >> op;
    cout << "Enter the second number: ";
    cin >> num2;

    switch (op) {
    case '+':
        add(&num1, &num2, &resultInt);
        cout << "Addition result: " << resultInt << endl;
        break;
    case '-':
        subtract(&num1, &num2, &resultInt);
        cout << "Subtraction result: " << resultInt << endl;
        break;
    case '*':
        multiply(&num1, &num2, &resultInt);
        cout << "Multiplication result: " << resultInt << endl;
        break;
    case '/':
        divide(&num1, &num2, &resultFloat);
        if (num2 != 0) {
            cout << "Division result: " << resultFloat << endl;
        }
        break;
    default:
        cout << "Wrong operation!" << endl;
        break;
    }

    return 0;
}