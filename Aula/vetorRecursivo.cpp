#include <iostream>
#include <vector>

using namespace std;

// Função recursiva que realiza a busca binária
int buscaBinariaRecursiva(const vector<int>& numeros, int l, int r, int x) {
    // Caso-base: o valor não foi encontrado
    if (l > r) {
        return -1;
    }

    // Calcula o índice do meio
    int m = l + (r - l) / 2;

    // Se o elemento do meio for o valor procurado
    if (numeros[m] == x) {
        return m;
    }

    // Se o valor estiver na metade direita
    if (numeros[m] < x) {
        return buscaBinariaRecursiva(numeros, m + 1, r, x);
    }

    // Se o valor estiver na metade esquerda
    return buscaBinariaRecursiva(numeros, l, m - 1, x);
}

int main() {
    vector<int> numeros = {0, 0, 1, 1, 1, 3, 5, 9, 15, 25, 26, 27, 50, 51, 52};
    int x;

    cout << "Digite o valor a ser buscado (versao recursiva): ";
    cin >> x;

    // Chama a função recursiva para iniciar a busca
    int resultado = buscaBinariaRecursiva(numeros, 0, numeros.size() - 1, x);

    if (resultado != -1) {
        cout << "Valor " << x << " encontrado no indice " << resultado << "." << endl;
    } else {
        cout << "Valor " << x << " nao encontrado no vetor." << endl;
    }

    return 0;
}