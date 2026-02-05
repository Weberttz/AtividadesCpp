#include <iostream>
#include <string>

using namespace std;

int main(){

    string str;

    getline(cin, str);
    string sub = str.substr(7,5);

    cout << sub << endl;

    return 0;
}