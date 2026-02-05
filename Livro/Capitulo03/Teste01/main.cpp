#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float num, resultado = 1, expoente;
    
    cin >> num >> expoente;

    for(int i=1; i<=expoente; i++)
        resultado*= num;

    printf("%.4f", resultado);

    return 0;
}


