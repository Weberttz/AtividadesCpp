#include <iostream>
using namespace std;

int main() {
    int n, consultas;
    cin >> n;

    int vet[n];
    for (int i = 0; i < n; i++)
        cin >> vet[i];

    int pref[n];

    // construindo o prefix sum
    pref[0] = (vet[0] % 2 == 0);
    for (int i = 1; i < n; i++)
        pref[i] = pref[i - 1] + (vet[i] % 2 == 0);

    cin >> consultas;

    while (consultas--) {
        int L, R;
        cin >> L >> R;

        int pares;
        if (L == 0)
            pares = pref[R];
        else
            pares = pref[R] - pref[L - 1];

        cout << pares << endl;
    }

    return 0;
}
