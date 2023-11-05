#include <iostream>

using namespace std;

int main() {
	int number;

	cout << "Enter number: ";
	cin >> number;

	int* ptr = &number;

	if (*ptr > 0) {
		cout << "The entered number is positive: " << endl;
	}
	else if (*ptr < 0) {
		cout << "The entered number is negative: " << endl;
	}
	else {
		cout << "The entered number is zero: " << endl;
	}

	return 0;

}
