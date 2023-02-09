#include <iostream>

using namespace std;

int main() {
	int sum = 0;
	for (int x = 0; x <= 100;) {
		sum += x;
		x++;
		if (x == 101) {
			break;
		}
	}
	cout << sum;
	return 0;
}
