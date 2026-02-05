#include <iostream>

using namespace std;

int main(){
    int ref = 3, n, qnt = 0;
    
    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    int vet[n];

    cout << "Digite os elementos do vetor separados por espaços" << endl;
    
    for(int i=0; i<n; i++){
        cin >> vet[i];

        if(vet[i]%ref == 0)
            qnt++;

    }

    cout << "O número de múltiplos de " << ref << " é: " << qnt << endl;

    return 0;
}