#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    double ladoA, ladoB, ladoC, anguloA, anguloB, anguloC, constante;
    const double pi = 3.1415;

    cout << "Digite o ladoA do triangulo: ";
    cin >> ladoA;
    cout << "Digite o angulo B (em graus): ";
    cin >> anguloB;
    cout << "Digite o angulo C (em graus): ";
    cin >> anguloC;

    anguloA = 180.0 - anguloB - anguloC;

    anguloA *= pi/180.0; //Transformar em radianos
    anguloB *= pi/180.0;
    anguloC *= pi/180.0;

    constante = ladoA/sin(anguloA); // constante da lei dos cossenos

    ladoB = constante * sin(anguloB);
    ladoC = constante * sin(anguloC);

    anguloA *= 180.0 / pi;

    if(anguloA <= 0 || anguloB <= 0 || anguloC <= 0 || ladoA <=0){
        cout << "Impossivel formar um triangulo" << endl;
        system("pause");
        return 1;
    }

    cout << "Angulo A = " << setprecision(4) << anguloA << endl;
    cout << "Lado B = " << ladoB << endl;
    cout << "Lado C = " << ladoC;

    return 0;
}