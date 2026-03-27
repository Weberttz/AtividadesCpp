#include <iostream>

using namespace std;

int main(){
    int n, k, qnt = 0;

    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    int vet[n];

    cout << "Digites os elementos do vetor separados por espaços: ";
    for(int i=0; i<n; i++)
        cin >> vet[i];

    cout << "Digite o valor de K: ";
    cin >> k;

    int l = 0, soma = 0;

    for (int r = 0; r < n; r++) {
        soma += vet[r];

        while (soma > k) {
            soma -= vet[l];
            l++;
        }

        qnt += (r - l + 1);
    }

    cout << "A quantidade de sub-arrays que a soma é menor ou igual a K é: " << qnt << endl;

    return 0;
}