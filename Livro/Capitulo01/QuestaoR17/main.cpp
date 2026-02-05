#include <iostream>
#include <ctime>

using namespace std;

int main(){
    int qnt_meses = 0;
    double saldo, desconto, porcentagem, novo_saldo;

    do{
        system("cls");
        cout << "Qual o valor do saldo inicial" << endl;
        cin >> saldo;

        cout << "Qual a porcentagem" << endl;
        cin >> porcentagem;

        porcentagem/=100;

        cout << "Qual o valor dos descontos mensais" << endl;
        cin >> desconto;

        novo_saldo = saldo - desconto;

    }while(desconto == novo_saldo * porcentagem);
        
    cout << endl;
    
    while(saldo > 0){
        cout << saldo << endl;
        saldo = saldo - desconto;
        saldo += saldo * porcentagem;
        qnt_meses++;
    }

    int qnt_anos;

    qnt_anos = qnt_meses/12;
    qnt_meses%=12;

    cout << "Anos = " << qnt_anos << "\nMeses = " << qnt_meses;
    
}