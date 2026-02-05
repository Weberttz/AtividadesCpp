#include <iostream>
#include <cmath>

using namespace std;

int calculaCombinacao(int n, int p){
    int resultado = 0, numerador = 1, denominador = 1;
    for(int i = n; i>n-p; i--)
        numerador*= i;
    for(int i = p; i> 1; i--)
        denominador*= i;

    resultado = numerador/denominador;
    return resultado;
}

int main(){

    int a, b, expoente, resultado = 0;
    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;
    cout << "Digite o valor do expoente: ";
    cin >> expoente;

    for(int i = expoente; i>=0; i--){
        resultado+= calculaCombinacao(expoente, expoente - i) * pow(a, i) * pow(b, expoente-i);
        if(i != 0)
            cout << calculaCombinacao(expoente, expoente - i) << " x " << a << "^" << i << " x " << b << "^" << expoente - i << " + ";
        else
            cout << calculaCombinacao(expoente, expoente - i) << " x " << a << "^" << i << " x " << b << "^" << expoente - i << " = "<< resultado;
    }

    cout << "\nO resultado de (" << a << " + " << b << ")^" <<  expoente << " = " << resultado; 

    return 0;
}