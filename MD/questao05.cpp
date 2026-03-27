#include <iostream>

using namespace std;

int main(){
    int elementos, posicoes, resultado = 1;
    cout << "Digite o numero de elementos da combinacao completa: ";
    cin >> elementos;
    cout << "Digite o numero de posicoes: ";
    cin >> posicoes;

    int numerador = 1, denominador = 1;

    cout << "Numerador = ";
    for(int i = (elementos + posicoes - 1); i>= elementos; i--){
        numerador*= i;
        if(i != elementos)
            cout << i << " x ";
        else
            cout << i << " = " << numerador;
    }

    cout << "\nDenominador = ";
    for(int i = posicoes; i>=1; i--){
        denominador*=i;
        if(i != 1)
            cout << i << " x ";
        else
            cout << i << " = " << denominador;
    }

    resultado = numerador/denominador;

    cout << "\nO resultado da combinacao completa de " << elementos << " com " << posicoes << " posicoes = " << resultado;

    return 0;
}