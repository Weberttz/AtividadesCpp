#include <iostream>

using namespace std;

int main(){

    int n, k, qnt = 0;

    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    int vet[n];

    cout << "Digite os elementos do vetor: ";

    for(int i=0; i<n; i++)
        cin >> vet[i];

    cout << "Digite o valor de K: ";
    cin >> k;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            if(vet[i] + vet[j] <= k)
                qnt++;
        }
    }

    cout << "A quantidade de pares (i, j) tais que vet[i] + vet[j] <= K é: " << qnt;

    return 0;
}