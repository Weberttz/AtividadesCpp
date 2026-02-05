#include <iostream>

using namespace std;

int main()
{
    int total = 0;
    cout << "Por favor digite um número: ";
    double x1;
    cin >> x1;
    cout << "total = " << total << "\n";
    total = total + x1;
    cout << "total = " << total << "\n";
    cout << "Por favor digite um número: ";
    double x2;
    cin >> x2;
    total = total + x2;
    cout << "total = " << total << "\n";
    total = total / 2;
    cout << "total = " << total << "\n";
    cout << "A média é " << total << "\n";
    
    return 0;
}