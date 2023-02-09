#include <iostream>

using namespace std;

int main() {
	int n = 1;
	int a = 1;
	do {
		do  {
			cout << n * a << " ";
			a++;
		} while (a != 11);
		cout << endl;
		n++;
		a = 1;
	} while (n != 11);
		
	
	return 0;
}



