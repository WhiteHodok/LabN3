#include <iostream>

using namespace std;

int main()
{
	int a, n = 1;
	cout << "Input number for factorial here :" << endl;
	cin >> a;
	do
	{
		if (a > 1)n *= a--;
	} while (a > 1);
	cout << n << endl;
	return 0;
}
