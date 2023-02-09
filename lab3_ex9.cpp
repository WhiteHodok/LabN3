#include <iostream>

using namespace std;

int main() {
	int a;
	for (int n = 1; n != 11; n++) {
		for (int a = 1; a!= 11; a++) {
			cout << n * a << " ";
		}
		cout << endl;
		a = 1;
	}
	return 0;
}
