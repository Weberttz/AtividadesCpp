#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct Tabela{
    int tab[16];
};

int main(){

    int num = 0, i = 0, qnt_perguntas = 5, elementos = 16;
    string opc;
    struct Tabela tabelas[qnt_perguntas];

    tabelas[0] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    tabelas[1] = {2,1,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    tabelas[2] = {4,5,6,7,12,13,14,15,20,21,22,23,28,29,30,31};
    tabelas[3] = {8,9,10,11,12,13,14,15,24,25,26,27,28,29,30,31};
    tabelas[4] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};

    while(i < qnt_perguntas){
        opc = ""; 
        cout << "Matriz " << i+1 << endl << endl;
        for(int j = 0; j<elementos; j++){
            cout << setw(2) << tabelas[i].tab[j] << " ";
            if((j+1)%qnt_perguntas == 0)
                cout << endl;
        }
    

        cout << "\n\nSeu numero pertence a matriz " << i+1 << "?(s/n): ";
        cin >> opc;

        if(opc == "Sim" || opc == "sim" || opc == "s" || opc == "S" || opc == "Yes")
            num+=pow(2, i);

        i++;

        cout << endl;
    }

    cout << "Seu numero = " << num;

    return 0;
}