#include <iostream>
#include <string>

using namespace std;

// Array para armazenar os valores do fatorial.
// No entanto, long long int não suporta o fatorial de 10000.
// Para evitar o overflow, limitamos a um valor pequeno, por exemplo, 20.
long long int fatorial[21];

// Função para calcular o fatorial de um número x
long long int fat(int x) {
    if (x == 0) {
        fatorial[x] = 1;
        return fatorial[x];
    }
    // A chamada recursiva deve armazenar o resultado do fatorial
    fatorial[x] = (long long)x * fat(x - 1);
    return fatorial[x];
}

int main() {
    // Calculando o fatorial de 20 para evitar o overflow
    fat(20);

    // Lendo a entrada como uma string para poder contar os caracteres
    string M;
    cout << "Digite um numero: ";
    cin >> M;
    int qtd = M.length();

    cout << "O numero digitado tem " << qtd << " caracteres." << endl;
    cout << "Os digitos sao:" << endl;

    // Acessando cada caractere (digito) da string
    for (int i = 0; i < qtd; i++) {
        cout << M[i] << " ";
    }
    cout << endl;

    return 0;
}