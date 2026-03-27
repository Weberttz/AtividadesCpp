#include <iostream>

using namespace std;

int main(){
    int n, consultas, L, R, qnt;

    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    int vet[n];

    cout << "Digite os elementos do vetor separados por espaços: " << endl;

    for(int i=0; i<n; i++)
        cin >> vet[i];

    cout << "Digite o número de consultas: ";
    cin >> consultas;

    for(int i=0; i<consultas; i++){
        qnt = 0;
        cout << "Consulta: " << i+1 << "\nDigite L e R separados por espaço, sendo L o ínicio do intervalo e R o fim do intervalo: ";
        cin >> L >> R; 

        for(int j=L; j<=R; j++){
            if(vet[j]%2 == 0)
                qnt++;
        }

        cout << "O número de pares no intervalo [L, R] é: " << qnt << endl;
    }

    return 0;
}