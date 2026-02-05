#include <iostream>

using namespace std;

int main(){
    float qnt_devida, qnt_recebida, diferenca;
    int centavos, qnt_notas;
    int cinquenta = 0, vinte_cinco = 0, dez = 0, cinco = 0, um = 0;
    const float cem = 100;

    cout << "Quantidade que o cliente deve: ";
    cin >> qnt_devida;
    cout << "Quantidade que o cliente entregou: ";
    cin >> qnt_recebida;

    diferenca = qnt_recebida - qnt_devida;
    centavos = diferenca * cem;

    qnt_notas = centavos/cem;
    centavos -= qnt_notas * cem;

    while(centavos > 0){
        if(centavos >= 50){
            cinquenta++;
            centavos-=50;
        }
        else if(centavos >= 25){
            vinte_cinco++;
            centavos-=25;
        }
        else if(centavos >= 10){
            dez++;
            centavos-=10;
        }
        else if(centavos >= 5){
            cinco++;
            centavos-=5;
        }
        else{
            um++;
            centavos-=1;
        } 
    }

    cout << "Troco = " << qnt_recebida << " - " << qnt_devida << " = " << diferenca << endl;
    cout << "Notas de 1 real = " << qnt_notas << endl;
    cout << "Moedas de 50 centavos = " << cinquenta << endl;
    cout << "Moedas de 25 centavos = " << vinte_cinco << endl;
    cout << "Moedas de 10 centavos = " << dez << endl;
    cout << "Moedas de 5 centavos = " << cinco << endl;
    cout << "Moedas de 1 centavos = " << um << endl;
    return 0;
}