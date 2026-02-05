#include <iostream>

using namespace std;

int main(){

    string nome = "Dave";

    cout << "+";
    for(int i = 0; i<9; i++)
        cout << "--";
    cout << "+" << endl << "|";

    for(int i=0; i<18; i++)
        cout << " ";
    cout << "|" << endl;

    cout << "|       "<< nome << "       |" << endl;

    cout << "|";
    for(int i=0; i<18; i++)
        cout << " ";
    cout << "|" << endl << "+";

    for(int i = 0; i<9; i++)
        cout << "--";

    cout << "+";

}

