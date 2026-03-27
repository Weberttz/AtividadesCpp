#include <iostream>
#include <algorithm>

//https://neps.academy/br/exercise/19
using namespace std;

int main() {
    int N;
    cin >> N;

    // índice 0: esquerda (E)
    // índice 1: direita (D)
    int botas[61][2] = {0};

    for (int i = 0; i < N; i++) {
        int M;
        char L;
        cin >> M >> L;

        if (L == 'E')
            botas[M][0]++;
        else
            botas[M][1]++;
    }

    int pares = 0;
    for (int tamanho = 30; tamanho <= 60; tamanho++) {
        pares += min(botas[tamanho][0], botas[tamanho][1]);
    }

    cout << pares << endl;

    return 0;
}