#include <iostream>
using namespace std;

int main() {
    const int arraySize = 5; 
    int numbers[arraySize] = { 10, 20, 30, 40, 50 }; 

    int* ptrStart = numbers; 
    int* ptrEnd = numbers + arraySize - 1; 

    

    while (ptrStart < ptrEnd) {
        
        int temp = *ptrStart;
        *ptrStart = *ptrEnd;
        *ptrEnd = temp;

        
        ptrStart++;
        ptrEnd--;
    }

    
    cout << "Array with reversed order: ";
    for (int i = 0; i < arraySize; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}