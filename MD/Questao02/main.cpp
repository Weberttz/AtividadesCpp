#include <iostream>

using namespace std;

int main(){
    int elementos, repeticoes, resultado = 1;
    do{
        system("cls");

        cout << "Digite a quantidade de elementos da permutacao com repeticao:";
        cin >> elementos;
        cout << "Digite a quantidade de repeticoes:";
        cin >> repeticoes;

    }while(elementos < repeticoes);

    for(int i = elementos; i>=repeticoes+1; i--){
        resultado*=i;
        if(i != repeticoes+1)
            cout << i << " x ";
        else
             cout << i << " = " << resultado;
    }

    cout << "\nO resultado da permutacao de " << elementos << " elementos com " << repeticoes << " se repetindo = " << resultado; 
    return 0;
}