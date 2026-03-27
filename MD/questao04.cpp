#include <iostream>

using namespace std;

int main(){
    int elementos, posicoes, resultado = 1;

    cout << "Digite a quantidade de elementos do arranjo: ";
    cin >> elementos;
    cout << "Digite a quantidade posicoes: ";
    cin >> posicoes;

    for(int i = elementos; i>elementos - posicoes; i--){
        resultado *=i;
        if(i != elementos - posicoes + 1)
            cout << i << " x ";
        else
            cout << i << " = " << resultado;
    }

    cout << "\nO resultado do arranjo simples de " << elementos << " elementos com " << posicoes << " posicoes = "<< resultado;

    return 0;
}