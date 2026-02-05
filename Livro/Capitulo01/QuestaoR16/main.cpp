#include <iostream>
#include <ctime>

using namespace std;

int main(){
    int qnt_meses = 0;
    double saldo = 10000.0;

    while(saldo > 0){
        cout << saldo << endl;
        saldo = saldo - 500;
        saldo += saldo * 0.05;
        qnt_meses++;
    }

    int qnt_anos;

    qnt_anos = qnt_meses/12;
    qnt_meses%=12;

    cout << "Anos = " << qnt_anos << "\nMeses = " << qnt_meses;
    
}