#include <iostream>

using namespace std;
void bubblesort(int a[], int tamanho){

    for (int i =0; i< tamanho; i++){

        for(int j = 0; j < tamanho-1; j++){
            if(a[j] > a[j+1]){

                int aux =a[j];
                a[j] = a[j+1];
                a[j+1] = aux;
            }
        }
    }
}

int main() {

 int a[]={5,6,3,7,2,8,1,9};
 int tamanho = 8;

 bubblesort(a, tamanho);

 for(int i=0; i<tamanho; i++){
    cout << a[i] << " ";
 }



    return 0;
}