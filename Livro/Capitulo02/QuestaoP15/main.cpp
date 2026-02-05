#include <iostream>
#include <string>

using namespace std;

int main(){
    int qnt_alg = 0;
    string str, sub;

    cout << "Digite certo numero nao negativo que deseja particionar: ";
    getline(cin, str);

    for(size_t i = 0; i<str.size(); i++)
        qnt_alg++;

    for(int i=0; i<qnt_alg; i++){
        sub = str.substr(i,1);
        cout << sub << " ";
    }

    return 0;
}   