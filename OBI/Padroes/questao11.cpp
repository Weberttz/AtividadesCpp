#include <iostream>

using namespace std;

int main(){

    int n, piso2, piso3, piso6, qnt;

    cout << "Digite N: ";
    cin >> n;

    piso2 = n/2;
    piso3 = n/3;
    piso6 = n/6;

    qnt = piso2 + piso3 - piso6;

    cout << "A quantidade é números de 1 até "<< n << " que são divisíveis por 2 ou por 3 é: " << qnt << endl;

    return 0;
}