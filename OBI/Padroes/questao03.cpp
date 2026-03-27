#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, t, g, pares = 0;
    int camisas[3][2] = {0};
    char tamanho, genero;

    cout << "Digite a quantidade de camisetas: ";
    cin >> n;

    cout << "Em cada linha, digite o tamanho (P, M, G) e o gênero (M, F) separados por espaço: " << endl;
    for(int i=0; i<n; i++){
        cin >> tamanho >> genero;

        switch(tamanho){
            case 'P':
                t = 0;
            break;
            case 'M':
                t = 1;
            break;
            case 'G':
                t = 2;
            break;
        }

        if(genero == 'M')
            g = 0;
        else
            g = 1;

        camisas[t][g]++;
    }

    for(int i=0; i<3; i++){
        switch (i)
        {
        case 0:
            cout << "O número de pares para o tamanho P é: " << min(camisas[i][0], camisas[i][1]) << endl;
            break;
        case 1:
            cout << "O número de pares para o tamanho M é: " << min(camisas[i][0], camisas[i][1]) << endl;
            break;
        case 2:
            cout << "O número de pares para o tamanho G é: " << min(camisas[i][0], camisas[i][1]) << endl;
            break;
        default:
            break;
        }

        pares+= min(camisas[i][0], camisas[i][1]);
    }

    cout << "O total de pares é: " << pares << endl;

    return 0;
}