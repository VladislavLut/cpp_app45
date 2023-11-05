#include <iostream>

using namespace std;

int main() {
	int a = 5;
	int b = 10;

	int *ptr_a = &a;
	int* ptr_b = &b;

	if (*ptr_a > *ptr_b) {
		cout << "The largest number: " << *ptr_a << endl;
	}
	else {
		cout << "The largest number: " << *ptr_b << endl;
	}

	return 0;
}
