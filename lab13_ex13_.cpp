#include <iostream>
using namespace std;
int main() {
	int a, n;
	cout << "Input your number here: " << endl;
	cin >> a;
	n = 2;
	do {
		if (a % n == 0) {
			if (a == 2) {
				break;
			}
			cout << "Not simple";
			break;
		}
		n++;
	} while (n < a);
		if (n == a) {
			cout << "Simple";
		}
		else if (a == 1) {
			cout << "Simple";
		}
		return 0;
}