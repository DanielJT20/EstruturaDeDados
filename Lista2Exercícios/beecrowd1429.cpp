#include <iostream>
#include <string>

using namespace std;

long long int fatorial[10];

void enche_fat() {
    fatorial[0] = 1;
    for (int i = 1; i < 10; ++i) {
        fatorial[i] = (long long)i * fatorial[i - 1];
    }
}

int main() {
    enche_fat();

    string numero_fat;
    
    while(cin >> numero_fat && numero_fat != "0"){
        int qtd_digitos = numero_fat.length();
        long long int result = 0;
        
        for (int i = 0; i < qtd_digitos; ++i) {
            char digito_char = numero_fat[i];
            int digito = digito_char - '0';
            
            int posicao_fat = qtd_digitos - i;
            
            result += digito * fatorial[posicao_fat];
        }
        cout << result << endl;
    }
    
    return 0;
}