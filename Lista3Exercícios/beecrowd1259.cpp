#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> todosOsNumeros(N);
    for (int i = 0; i < N; ++i) {
        cin >> todosOsNumeros[i];
    }

    int contagemPares = 0;
    int contagemImpares = 0;
    for (int i = 0; i < N; ++i) {
        if (todosOsNumeros[i] % 2 == 0) {
            contagemPares++;
        } else {
            contagemImpares++;
        }
    }

    vector<int> pares(contagemPares);
    vector<int> impares(contagemImpares);

    int indicePar = 0;
    int indiceImpar = 0;
    for (int i = 0; i < N; ++i) {
        if (todosOsNumeros[i] % 2 == 0) {
            pares[indicePar] = todosOsNumeros[i];
            indicePar++;
        } else {
            impares[indiceImpar] = todosOsNumeros[i];
            indiceImpar++;
        }
    }

    sort(pares.begin(), pares.end());

    sort(impares.begin(), impares.end(), [](int a, int b) {
        return a > b;
    });

    for (int i = 0; i < contagemPares; ++i) {
        cout << pares[i] << "\n";
    }

    for (int i = 0; i < contagemImpares; ++i) {
        cout << impares[i] << "\n";
    }

    return 0;
}