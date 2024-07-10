#include <iostream>
using namespace std;

// you may type whatever you want
int main()
{
    int a, b;
    cout << "Enter A and B: ";
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n';
    cout << "A - B = " << a - b << '\n';
    // произведение
    cout << "A * B = " << a * b << '\n';
    // деление
    cout << "A / B = " << a / b << '\n';
    // Ќаходим максимальное из a и b
    int maxNumber = (a > b) ? a : b;
    cout << "Max of A and B = " << maxNumber << '\n';
    // Ќаходим минимальное из a и b
    int minNumber = (a < b) ? a : b;
    cout << "Min of A and B = " << minNumber << '\n';
}
