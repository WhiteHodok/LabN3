#include <iostream>
#include <limits> 
using namespace std;

int main()
{
    int counter = 1;
    int number;

    cout << "Please enter a number: ";
    cin >> number;

    int factorial = number;
    while (counter != number)
    {
        if (std::numeric_limits<int>::max() / factorial < (number - counter)) {
            std::cout << "cannot handle such large numbers\n";
            return 0;
        }
        factorial = factorial * (number - counter);
        counter++;

    }

    cout << "The factorial of " << number << "! is: " << factorial << endl;
    return 0;
}