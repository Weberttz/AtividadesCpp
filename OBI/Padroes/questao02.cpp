#include <iostream>

using namespace std;

int main(){

    int n, num, tam = 100, qnt = 0;

    cout << "Digite o quantidade de elementos do conjunto: ";
    cin >> n;

    int vet[tam] = {0};

    cout << "Digite os elementos do conjunto separados por espaços" << endl;

    for(int i=0; i<n; i++){
        cin >> num;
        num--;
        vet[num]++;
    }

    for(int i=0; i<tam; i++){
        if(vet[i] > 0)
            qnt++;
    }

    cout << "A quantidade de elementos distintos é: " << qnt << endl;

    return 0;
}