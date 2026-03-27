#include <iostream>

//https://neps.academy/br/exercise/822

using namespace std;

int main(){
    int n, circ = 8, um = 1, dois = 2, tres = 3;
    cin >> n;

    if(n%circ == 0)
        cout << tres;
    else if(n%circ == 5 || n%circ == 7)
        cout << dois;
    else
        cout << um;
        
        
    return 0;
}
