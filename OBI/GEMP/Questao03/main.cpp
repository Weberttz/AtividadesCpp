#include <iostream>
#include <string>
#include <vector>

int main(){

    std::string frase;
    int q, inicio, fim, contador = 0;
    std::vector<int> contadores;

    std::cout << "input" << std::endl;
    getline(std::cin, frase);
    std::cin >> q;

    for(int i =0; i<q; i++){
        contador = 0;
        std::cin >> inicio >> fim;
        inicio--;
        for(int j=inicio; j<fim; j++){
            if(frase[j] == 'a')
                contador++;
        }
        contadores.push_back(contador);
    }

    std::cout << "output" << std::endl;
    for(int i=0; i<contadores.size(); i++)
        std::cout << contadores[i] << std::endl;

    return 0;
}