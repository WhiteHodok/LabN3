#include <iostream>

using namespace std;

int main() {
	int n = 2;
	int a;
	cout << "Input your number here:" << endl;
	cin >> a;
	for (;n < a;) {
		if (a % n == 0) {
			cout << "Not simple";
			break;
		}
		n += 1;
	}
	if (n == a) {
		cout << "Simple";
	}
	else if (a == 1) {
		cout << "Simple";
	}
	return 0;
}