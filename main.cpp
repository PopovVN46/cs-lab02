#include <iostream>
using namespace std;

// you may type whatever you want
int main()
{
    double a, b;
    cout << "Enter A and B: ";
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n';
    cout << "A - B = " << a - b << '\n';
    // ������������
    cout << "A * B = " << a * b << '\n';
    // �������
    cout << "A / B = " << a / b << '\n';

    // ������� ������������ �� a � b
    double maxNumber = (a > b) ? a : b;
    cout << "Max of A and B = " << maxNumber << '\n';
    // ������� ����������� �� a � b
    int minNumber = (a < b) ? a : b;
    cout << "Min of A and B = " << minNumber << '\n';

}
