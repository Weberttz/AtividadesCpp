#include <iostream>

using namespace std;

int main(){

    int n, espacos = 3, qnt = 1, denominador = 1;

    cout << "Digite a quantidade de alunos dessa sala: ";
    cin >> n;

    if(n < espacos){
        cout << "Nessa sala não é possível formar nenhuma comissão com " << espacos << " alunos." << endl;
        return 0;
    }

    for(int i=espacos; i>0; i--)
        denominador*= i;

    while(espacos)
    {
        qnt *= n;
        n--;
        espacos--;
    }

    espacos = 3;
    qnt/= denominador;

    cout << "O número de maneiras de formar uma comissão de " << espacos << " alunos nessa sala é: " << qnt << endl;


    return 0;
}