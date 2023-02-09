#include <iostream>
#include <limits>

using namespace std;

int main() {
	int counter = 1;
	int number;

	cout << "Please enter a number here:" << endl;
	cin >> number;

	int factorial = number;
	for (; counter != number;) {
		if (numeric_limits<int>::max() / factorial < (number - counter)) {
			cout << "TOO LARGE NUMBERS" << endl;
			return 0;
		}
		factorial = factorial * (number - counter);
		counter++;
	}
	cout << "The factorial of " << number << "! is :" << factorial << endl;
	return 0;

}