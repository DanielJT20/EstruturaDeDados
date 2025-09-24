#include <iostream>
#include <vector>

using namespace std;

void insertion_sort(int v[], int tamanho)
{
    for(int i = 1; i < tamanho; i++)
    {
        int chave = v[i];
        int j = i-1;

        while(j >= 0 && v[j] > chave)
        {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = chave;
    }
}

int main() {

    int v[10] = {5, 2, 9, 1, 5, 6, 3, 7, 8, 4};
    int tamanho = 10;
    insertion_sort(v, tamanho);
   for(int i = 0; i < tamanho; i++){
        cout << "v[" << i << "] = " << v[i] << endl;
   }
    return 0;
}