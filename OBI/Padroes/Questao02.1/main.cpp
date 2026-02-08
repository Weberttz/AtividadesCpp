#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int n, qnt = 0;

    cout << "Digite o quantidade de elementos do conjunto: ";
    cin >> n;

    int vet[n] = {0};

    cout << "Digite os elementos do conjunto separados por espaços" << endl;

    for(int i=0; i<n; i++)
        cin >> vet[i];

    sort(vet, vet + n);

    for(int i=0; i<n; i++){
        if(vet[i] != vet[i-1])
            qnt++;
    }

    cout << "A quantidade de elementos distintos é: " << qnt << endl;

    return 0;
}