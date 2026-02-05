#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> numeros = {1,2,3,4};
    int elemento = 3;
    
    //Remove o elemento do vector
    numeros.erase(remove(numeros.begin(), numeros.end(), elemento), numeros.end());
    
    for(size_t i=0; i<numeros.size(); i++)
        cout << numeros[i] << " ";

    return 0;
}