#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	int i = 0;
	int sum = 0;
	while (i <= 100) {
		sum += i;
		++i;
	}
	cout << sum;
	return 0;
}
