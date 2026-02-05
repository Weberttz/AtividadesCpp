#include <iostream>
#include <iomanip>

using namespace std;

int calculaCombinacoes(int n, int p){
    int resultado = 1, numerador = 1, denominador = 1;

    for(int i = n; i>n-p; i--)
        numerador*= i;
    for(int i = p; i>1; i--)
        denominador*= i;

    resultado = numerador/denominador;
    return resultado;
}

int main(){
    int linhas;

    cout << "Digite a quantidade de linhas do Triangulo de Pascal: ";
    cin >> linhas;

    cout << endl;
    for(int i = 0; i<=linhas; i++){
        for(int j = 0; j<=i; j++){
            if(j == 0)
                cout << "linha:" << setw(2) << i <<  "\t\t";

            cout << calculaCombinacoes(i, j) << " \t";
        }
        cout << endl << endl;
    }

    return 0;
}