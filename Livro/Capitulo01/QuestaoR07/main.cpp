#include <iostream>

using namespace std;

int main(){
    float investimento;
    int multiplicador = 2;
    float resultado;

    cout << "Qual o investimento?" << endl;

    cin >> investimento;

    resultado = multiplicador * investimento;

    cout << resultado << " eh o resultado do investimento" << endl;

    return 0;
}