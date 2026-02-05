#include <iostream>
#include <string>

using namespace std;

int main(){
    const string meses = "Janeiro   Fevereiro Março    Abril     Maio      Junho     Julho     Agosto    Setembro  Outubro   Novembro  Dezembro ";
    string submes;
    int mes, tam = 9;

    cout << "Digite o mes do ano:";
    cin >> mes;

    if(mes >= 1 && mes <= 12){
        int inicio = mes - 1;
        submes = meses.substr((inicio)*(tam+1), tam);
    }else{
        cout << "Não existe esse mês";
        return 0;
    }

    cout << submes;

    return 0;
}