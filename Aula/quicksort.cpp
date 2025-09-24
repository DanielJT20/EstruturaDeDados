#include <iostream>
#include <vector>

// Torna os nomes da biblioteca padrão do C++ visíveis sem o prefixo std::
using namespace std;

// Função para trocar dois elementos de posição
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * @brief Particiona o array e retorna o índice do pivô.
 *
 * Esta função utiliza o esquema de particionamento de Lomuto.
 * Ela seleciona o último elemento como pivô e o posiciona em sua
 * posição correta no array ordenado, colocando todos os elementos
 * menores (ou iguais) à sua esquerda e todos os maiores à sua direita.
 *
 * @param arr O array a ser particionado.
 * @param low O índice inicial.
 * @param high O índice final.
 * @return O índice da posição final do pivô.
 */
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Pivô é o último elemento
    int i = (low - 1);   // Índice do menor elemento

    for (int j = low; j <= high - 1; j++) {
        // Se o elemento atual for menor ou igual ao pivô
        if (arr[j] <= pivot) {
            i++; // Incrementa o índice do menor elemento
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/**
 * @brief A função principal que implementa o Quicksort.
 *
 * @param arr O array a ser ordenado.
 * @param low O índice inicial.
 * @param high O índice final.
 */
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        // pi é o índice de particionamento, arr[pi] está agora no lugar certo
        int pi = partition(arr, low, high);

        // Ordena recursivamente os elementos antes e depois da partição
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Função para imprimir um array
void printArray(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Função principal para testar o algoritmo
int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();

    cout << "Array original: \n";
    printArray(arr);

    quickSort(arr, 0, n - 1);

    cout << "Array ordenado: \n";
    printArray(arr);

    return 0;
}