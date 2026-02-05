#include <iostream>

using namespace std;

int main()
{
    float litros, consumo, preco, quilometros, custo_100km;

    cout << "Qual o numero de litros de gasolina no tanque? ";
    cin >> litros;
    cout << "Qual o consumo de combustivel por quilometros? ";
    cin >> consumo;
    cout << "Qual o preco do litro da gasolina? ";
    cin >> preco;

    quilometros = litros/consumo;
    custo_100km = preco * 100.0 * consumo;

    cout << "Quantidade de quilometros que pode rodar = " << quilometros << endl;
    cout << "Preco por 100km's rodados = " << custo_100km;

    return 0;
}