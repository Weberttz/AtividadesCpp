#include <iostream>
#include <vector>

using namespace std;

int main(){

    int num, qnt_divisores = 0, div_impares = 0, div_pares = 0;
    vector<int>divisores;
    cout << "Digite o numero: ";
    cin >> num;

    for(int i=1; i<=num; i++){
        if(num%i == 0){
            if(i%2 == 1)
                div_impares++;
            else
                div_pares++;

            qnt_divisores++;
            divisores.push_back(i);
        }
    }

    cout << "Quantidade de divisores = " << qnt_divisores << endl;
    cout << "Quantidade de divisores impares = " << div_impares << endl;
    cout << "Quantidade de divisores pares = " << div_pares << endl;

    cout << "Divisores: ";
    for(size_t i=0; i<divisores.size(); i++){
        cout << divisores[i] << " ";
    }
     
    return 0;
}