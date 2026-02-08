#include <iostream>
#include <vector>

int main(){

    int tam, quantidade, num, altura_minima = 300, soma, indice = 0;
    std::vector<int> alturas;

    std::cin >> tam >> quantidade;

    for(int i=0; i<tam; i++){
        std::cin >> num;
        alturas.push_back(num);
    }
    
    for(int i=0; i<tam - 2; i++){
        soma = 0;
        for(int j=i; j<i+quantidade; j++){
            soma+= alturas[j];
        }
        if(soma < altura_minima){
            altura_minima = soma;
            indice = i + 1;
        }
    }

   std::cout << indice << std::endl;

}