#include <iostream>

//https://neps.academy/br/exercise/45

using namespace std;

int main(){
    int ordem, soma, maior = 0;

    cin >> ordem;

    int matriz[ordem][ordem];
    int somasLinhas[ordem] = {0};
    int somasColunas[ordem] = {0};

    for(int i=0; i<ordem; i++){
        for(int j=0; j<ordem; j++){
            cin >> matriz[i][j];
        }
    }

    for(int i=0; i<ordem; i++){
        for(int j = 0; j<ordem; j++){
            somasLinhas[i]+= matriz[i][j];
            somasColunas[i]+= matriz[j][i];
        }
    }

    for(int i=0; i<ordem; i++){
        for(int j=0; j<ordem; j++){
            soma = somasLinhas[i] + somasColunas[j] - (2 * matriz[i][j]);  
            if(soma > maior) maior = soma;
        }
    }

    cout << maior;
}
