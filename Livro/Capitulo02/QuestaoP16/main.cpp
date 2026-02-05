#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double PI = 3.141592653589793;

int main()
{
    cout << " 0 graus: " << setw(4) << setprecision(2) << sin(0) << "   " << setw(4) << setprecision(2) << cos(0) << "\n";
    cout << "30 graus: " << setw(4) << setprecision(2) << sin(30 * PI / 180) << "   " << setw(4) << setprecision(2) << cos(30 * PI / 180) << "\n";
    cout << "45 graus: " << setw(4) << setprecision(2) << sin(45 * PI / 180) << "   " << setw(4) << setprecision(2) << cos(45 * PI / 180) << "\n";
    cout << "60 graus: " << setw(4) << setprecision(2) << sin(60 * PI / 180) << "   " << setw(4) << setprecision(2) << cos(60 * PI / 180) << "\n";
    cout << "90 graus: " << setw(4) << setprecision(2) << sin(90 * PI / 180) << "   " << setw(4) << setprecision(2) << cos(90 * PI / 180) << "\n";
    return 0;
}