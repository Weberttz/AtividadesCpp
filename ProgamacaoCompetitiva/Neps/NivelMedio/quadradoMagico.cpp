#include <iostream>

//https://neps.academy/br/exercise/236

using namespace std;

int main(){
    int n, soma = 0, ref = 0;
    cin  >> n;

    int mat[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> mat[i][j];
        }
    }

    for(int i =0; i<n; i++){
        ref += mat[i][i];
        soma += mat[i][n-i-1];
    }

    if(soma != ref){
        cout << "-1";
        return 0;
    }

    for(int i=0; i<n; i++){
        soma = 0;
        for(int j=0; j<n; j++){
            soma += mat[i][j];
        }
        
        if(soma != ref){
            cout << "-1";
            return 0;
        }
    }

    for(int i=0; i<n; i++){
        soma = 0;
        for(int j=0; j<n; j++){
            soma += mat[j][i];
        }
        
        if(soma != ref){
            cout << "-1";
            return 0;
        }
    }

    cout << ref;
    

    return 0;
}
