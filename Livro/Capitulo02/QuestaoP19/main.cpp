#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
    int hr1, hr2, hr3, min = 0, hora = 0;
    int tam_min = 2, dia = 2400;

    cout << "Digite o primeiro horário: ";
    cin >> hr1;

    cout << "Digite o segundo horário: ";
    cin >> hr2;


    if(hr1 < hr2)
        hr3 = hr2 - hr1;
    else
        hr3 = dia - hr1 + hr2;
    
    for(int i=0; i<tam_min; i++){
        min += hr3%10 * pow(10, i);
        hr3/=10;
    }

    hora = hr3;
    min %= 40;
    
    cout << hora << " horas e " << min << " minutos";

    return 0;
}