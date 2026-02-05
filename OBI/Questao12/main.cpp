#include <iostream>

using namespace std;

int main(){

    int espacos = 4, digitos = 10, qnt = 1;

    while(espacos){
        qnt *= digitos;
        digitos--;
        espacos--;
    }

    cout << "A quantidade de senhas possíveis é: " << qnt << endl;

    return 0;
}