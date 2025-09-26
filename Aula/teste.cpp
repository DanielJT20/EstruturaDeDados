#include <iostream>
using namespace std;

int main() {
    int v[5] = {5, 2, 1, 4, 3};
    int tamanho = 5;

    for (int i = 0; i < tamanho - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < tamanho; j++) {
            if (v[j] < v[min_idx]) {
                min_idx = j;
            }
        }
        // Troca o menor elemento encontrado com o elemento da posição i
        int temp = v[i];
        v[i] = v[min_idx];
        v[min_idx] = temp;
    }

    for (int i = 0; i < tamanho; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}