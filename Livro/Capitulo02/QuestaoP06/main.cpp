#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float ladoA, ladoB, area, perimetro, diagonal;

    cout << "Digite o tamanho do lado A: ";
    cin >> ladoA;
    cout << "Digite o tamanho do lado B: ";
    cin >> ladoB;

    area = ladoA * ladoB;
    perimetro = 2 * ladoA + 2 * ladoB;

    diagonal = sqrt(pow(ladoA, 2) + pow(ladoB, 2));

    cout << "Area = " << area << endl;
    cout << "Perimetro = " << perimetro << endl;
    cout << "Diagonal = " << diagonal << endl;

    return 0;
}