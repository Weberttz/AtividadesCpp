#include <iostream>

using namespace std;

int main(){
    int elementos, resultado = 1;
    cout << "Digite a quantidade de elementos da permutacao simples: ";
    cin >> elementos;

    for(int i=1; i<=elementos; i++)
        resultado*=i;

    cout << "O resultado da permutacao simples de " << elementos << " elementos = " << resultado;

    return 0;
}