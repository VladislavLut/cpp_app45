#include <iostream>
using namespace std;

int main() {
    const int arraySize = 5; 
    int originalArray[arraySize] = { 10, 20, 30, 40, 50 }; 

    int copiedArray[arraySize]; 

    int* ptrOriginal = originalArray; 
    int* ptrCopied = copiedArray;     

    for (int i = 0; i < arraySize; i++) {
        *ptrCopied = *ptrOriginal; 
        ptrOriginal++; 
        ptrCopied++;   
    }

    
    cout << "Copied array: ";
    for (int i = 0; i < arraySize; i++) {
        cout << copiedArray[i] << " ";
    }
    cout << endl;

    return 0;
}
