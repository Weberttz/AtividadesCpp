#include <iostream>
#include <unordered_map>

using namespace std;

int main(){

    int n, num,qnt = 0;

    cout << "Digite a quantidade de elementos do vetor: ";
    cin >> n;

    //declara um mapa desordenado que faz uma correspondência entre dois números, nesse caso é o número e sua frequência
    unordered_map<int, int> freq;

    for(int i=0; i<n; i++){
        cin >> num;
        //se o número não existir, cria-se com 0 e soma 1
        freq[num]++;
    }

    for(auto p : freq) {
        //verifica se os aparecimentos são três vezes ou mais para cada chave(número)
        if(p.second >= 3)
            qnt++;
    }

    cout << "A quantidade de números que aparecereram três vezes ou mais é: " << qnt << endl;

    return 0;
}