#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int inicio = 1, fim = 9, pt_incial = 2, pt_final = 4;
    
    for(int i = inicio; i<= fim; i++){
        for(int j = pt_incial; j<= pt_final; j++){
            cout << pow(i, j) << " ";
        }
        cout << endl;
    }


    return 0;
}