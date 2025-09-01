#include <iostream>
#include <vector>
#include <algorithm> // Necessário para std::sort
#include <limits> // Necessário para std::numeric_limits

using namespace std;

int main() {
    int n;
    while (cin >> n && n != 0) {
        vector<int> original_killer(n);
        for (int i = 0; i < n; ++i) {
            cin >> original_killer[i];
        }

        // Cria uma cópia do vetor original para ordenação
        vector<int> sorted_killer = original_killer;
        sort(sorted_killer.begin(), sorted_killer.end());

        // O segundo maior valor estará no penúltimo índice do vetor ordenado
        int second_largest_value = sorted_killer[n - 2];

        // Encontra o índice do segundo maior valor no vetor original
        int second_largest_index = -1; // Inicializa com -1 para indicar que não foi encontrado
        for (int i = 0; i < n; ++i) {
            if (original_killer[i] == second_largest_value) {
                second_largest_index = i + 1; // Adiciona 1 para o índice ser baseado em 1, como é comum em problemas de programação competitiva
                break; // Encerra o loop assim que o valor é encontrado
            }
        }

        cout << second_largest_index << endl;
    }

    return 0;
}