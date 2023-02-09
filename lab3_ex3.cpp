#include <iostream>

using namespace std;

void main()
{
    setlocale(LC_ALL, "ru");
    int a;
    int n = 2;
    cout << "Введите ваше число:";
    cin >> a;
    
    while (n < a)
    {
        if (a % n == 0)
        {
            cout << "Число не простое";
            break;
        }
        n += 1;
    }
    if (n == a)
    {
        cout << "Число простое";
    }
}
