#include <iostream>
using namespace std;

int main() {
	int n = 1;
	int a = 1;
	while (n != 11) {
		while (a != 11) {
			cout << n * a << " ";
			a++;
		}
		cout << endl;
		n++;
		a = 1;
	}
	return 0;
}
