#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> lista{3, 5, -1, 0, 2};

    // Percorre a lista a partir do segundo elemento
    for (int i = 1; i < lista.size(); i++) {
        // Armazena o valor a ser inserido
        int chave = lista[i];
        // Inicia a verificação a partir da posição anterior
        int j = i - 1;

        // Move os elementos da sublista ordenada que são maiores que a chave
        // uma posição à frente
        while (j >= 0 && lista[j] > chave) {
            lista[j + 1] = lista[j];
            j = j - 1;
        }
        // Insere a chave na posição correta
        lista[j + 1] = chave;
    }

    // Imprime a lista ordenada
    for (int i = 0; i < lista.size(); i++) {
        cout << lista[i] << endl;
    }

    return 0;
}
