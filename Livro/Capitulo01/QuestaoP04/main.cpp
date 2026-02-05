#include <iostream>

using namespace std;

int main(){
    int produto = 1;
    float fracao = 0;

    for(int i = 1; i<=10; i++){
        produto*=i;
        fracao += 1/(float)i;
    }

    cout << "Resultado do produto = " << produto << " e o da fracao = " << fracao;

    return 0;
    
}