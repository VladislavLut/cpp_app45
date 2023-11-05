#include <iostream>
#include <Windows.h>
using namespace std;

void swapValues(int* ptr1, int* ptr2) {
    int temp = *ptr1; 
    *ptr1 = *ptr2; 
    *ptr2 = temp; 
}

int main() {
    system("chcp 1251");
    system("cls");
    int a = 5;
    int b = 10;

    cout << "Initial values:\n";
    cout << "a = " << a << ", b = " << b << "\n\n";

    swapValues(&a, &b); 

    cout << "Value after exchange:\n";
    cout << "a = " << a << ", b = " << b << "\n";

    return 0;
}