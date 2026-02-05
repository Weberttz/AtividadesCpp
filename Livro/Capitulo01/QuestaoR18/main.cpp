#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double pi, sub = 0, soma = 0;

    for(int i = 3; i<300000; i+=4){
        sub += 1.0/i;
        soma += 1.0/(i-2);
    }

    pi = soma - sub;
    pi*=4;

    cout << "Pi = " << setprecision(7) << pi;

}