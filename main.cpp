#include <iostream>
using namespace std;

int main() {
    const int arraySize = 5; 
    int numbers[arraySize] = { 10, 20, 30, 40, 50 }; 

    int sum = 0; 

    int* ptr = numbers; 

    for (int i = 0; i < arraySize; i++) {
        sum += *ptr; 
        ptr++; 
    }

    cout << "The sum of array elements: " << sum << endl;

    return 0;
}