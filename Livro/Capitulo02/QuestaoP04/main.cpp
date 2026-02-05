#include <iostream>

using namespace std;

int main(){

    float metros, milhas = 0.00062137, pes = 3.2808399, polegadas = 39.3700787;

    cout << "Digite a quantidade de metros: ";
    cin >> metros;

    polegadas *= metros;
    pes*= metros;
    milhas*= metros;

    cout << "Milhas = " << milhas << "\nPes = " << pes << "\nPolegadas = " << polegadas;

    return 0;
}
