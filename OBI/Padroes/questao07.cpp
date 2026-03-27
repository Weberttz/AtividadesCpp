#include <iostream>

using namespace std;

int main(){

    int n, soma, k, qnt = 0;

    cout << "Digite o tamanho do vetor: ";
    cin >> n;
    
    int vet[n];
    cout << "Digite os elementos do vetor, separados por espaços: ";
    for(int i=0; i<n; i++)
        cin >> vet[i];

    cout << "Digite o valor de K: ";
    cin >> k;
    
    for(int i=0; i<n; i++){
        soma = 0;
        for(int j=i; j<n; j++){
            soma += vet[j];
            if(soma > k) 
                break;
            
            qnt++;
        }
    }

    cout << "A quantidade de sub-arrays que a soma é menor ou igual a K é: " << qnt << endl;

    return 0;
}