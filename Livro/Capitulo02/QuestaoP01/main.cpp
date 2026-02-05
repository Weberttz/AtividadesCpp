#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    int linhas = 12;
    double num = 1;
    for(int i = 0; i<linhas; i++){
        cout << fixed << setprecision(1) <<  num << endl;
        num *= 10;
    }
    
    return 0;
}
