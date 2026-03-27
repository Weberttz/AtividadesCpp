#include <iostream>

using namespace std;

int main(){
    int elementos, posicoes, resultado = 1;
    cout << "Digite a quantidade de elementos da combinacao simples: ";
    cin >> elementos;
    cout << "Digite a quantidade de espacos:";
    cin >> posicoes;

    int numerador = 1, denominador = 1;
    cout << "Numerador = ";
    for(int i = elementos; i> elementos - posicoes; i--){
        numerador *= i;
        if(i != elementos - posicoes + 1)
            cout << i << " x ";
        else
             cout << i << " = " <<numerador;
    }

    cout << "\nDenominaodor = ";
    for(int i = posicoes; i >= 1; i--){
        denominador*= i;
        if(i != 1)
            cout << i << " x ";
        else
             cout << i << " = "<< denominador;
    }

    resultado = numerador/denominador;

    cout << "\nO resultado da combinacao simples de " << elementos << " para " << posicoes << " = " << resultado;

    return 0;
}