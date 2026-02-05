#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    double ladoA, ladoB, ladoC, anguloA, anguloB, anguloC, proporcao;
    const double pi = 3.1415;
 
    cout << "Digite o ladoA: ";
    cin >> ladoA;
    cout << "Digite o ladoB: ";
    cin >> ladoB;
    cout << "Digite o angulo (em graus) formado por esses lados: ";
    cin >> anguloC;

    anguloC = anguloC * pi / 180.0;

    ladoC = sqrt(pow(ladoA, 2) + pow(ladoB, 2) - 2*ladoA*ladoB*(int)cos(anguloC));

    proporcao = ladoC/sin(anguloC);
    
    anguloA = asin(ladoA/proporcao) * 180.0 / pi;
    anguloB = asin(ladoB/proporcao) * 180.0 / pi;

    cout << "LadoC = " << ladoC << endl;
    cout << "Angulo A = " << setprecision(4) << anguloA << endl;
    cout << "Angulo B = " << anguloB << endl;

    return 0;
}