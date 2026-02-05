#include <iostream>

using namespace std;

int main(){

    string strf = "+---+---+---+";
    string strp = "|   |   |   |";
    int limite = 7;

    for(int i=0; i<limite;i++){
        if(i%2 == 0)
            cout << strf << endl;
        else
            cout << strp << endl;
    }   

    return 0;
}