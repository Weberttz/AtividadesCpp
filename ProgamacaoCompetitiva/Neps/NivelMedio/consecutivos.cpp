#include <iostream>

//https://neps.academy/br/exercise/110

using namespace std;

int main(){
    int tam, maior = 0, contador = 1;
    cin >> tam;

    int sequencia[tam];
    for(int i = 0; i<tam; i++)
        cin >>sequencia[i];

    for(int i=0; i<tam; i++){
        if(sequencia[i] == sequencia[i+1])
            contador++;
        else{
            if(maior < contador)
                maior = contador;
            
            contador = 1;
        }
    }   

    cout << maior;

    return 0;
}
