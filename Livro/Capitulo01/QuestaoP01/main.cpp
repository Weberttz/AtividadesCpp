#include <iostream>

using namespace std;

int main(){
    
    string entrada_usuario;

    cout << "Olá, meu nome é Hal!\nO que você gostaria que eu fizesse?" << endl;

    getline(cin, entrada_usuario);

    cout << "Sinto muito, eu não posso fazer isso";

    return 0;

}