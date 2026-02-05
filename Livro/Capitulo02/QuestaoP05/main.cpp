#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float raio, area, volume, superficie;
    const float pi = 3.1415;

    cout << "Digite o raio: ";
    cin >> raio;

    area = pi * pow(raio, 2);
    volume = (4.0/3.0) * pi * pow(raio, 3);
    superficie = 4 * pi * pow(raio, 2);

    cout << "Area da circunferencia = " << area << endl;
    cout << "Volume da esfera = " << volume << endl;
    cout << "Superficie da esfera = " << superficie << endl;

    return 0;
}