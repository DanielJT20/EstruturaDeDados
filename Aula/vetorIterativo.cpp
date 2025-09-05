#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
    vector <int> numeros = {0, 0, 1, 1, 1, 3, 5, 9, 15, 25, 26, 27, 50, 51, 52};
    
    int x;
    cout << "Digite o valor a ser buscado: ";
    cin >>x;
    
    int l = 0;
    int r = numeros.size() - 1;
    bool encontrado = false;
    
    while (l <= r) {
        int m = (r + l)/2;
        
        if (numeros[m] == x) {
            encontrado = true;
            cout << "Valor " << x << " encontrado no indice " << m << endl;
            break;
        }
        if (numeros[m] < x) {
            l = m + 1; 
            cout << "l: " << l << endl;
            cout << "r: " << r << endl << endl;
        } else {
            r = m - 1;
            cout << "l: " << l << endl;
            cout << "r: " << r << endl << endl;
        }
    }
    if (!encontrado) {
        cout << "Valor " << x << " nao encontrado no vetor." << endl;
    }
    
    return 0;
}