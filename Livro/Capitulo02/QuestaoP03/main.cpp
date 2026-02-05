#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    float num1, num2;

    float soma, subtracao, produto, distancia, maximo, minimo, media;

    cout << "Digite dois inteiros: ";
    cin >> num1 >> num2;

    soma = num1 + num2;
    subtracao = num1 - num2;
    produto = num1 * num2;
    media = (num1 + num2)/2.0;
    distancia = abs(subtracao);
    maximo = max(num1, num2);
    minimo = min(num1, num2);

    cout << "Soma = " << soma << endl;
    cout << "Subtracao = " << subtracao << endl;
    cout << "Produto = " << produto << endl;
    cout << "Media = " << media << endl;
    cout << "Distancia = " << distancia << endl;
    cout << "Maximo = " << maximo << endl;
    cout << "Minimo = " << minimo << endl;

    return 0;
}