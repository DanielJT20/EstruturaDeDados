#include <iostream>

using namespace std;

class Contador{
    public:
    int contaElementos(int arr[], int tamanho, int elemento){
        int contador = 0;
        for(int i = 0; i < tamanho; i++){
            if(arr[i] == elemento){
                contador++;
            }
        }
        return contador;
    }
}

int main(){
    Contador c;
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int elemento = 2;
    int resultado = c.contaElementos(arr, tamanho, elemento);
    cout << "O elemento " << elemento << " aparece " << resultado << " vezes no array." << endl;
    return 0;
}