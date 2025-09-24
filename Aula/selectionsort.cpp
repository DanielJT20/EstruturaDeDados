#include <iostream>

using namespace std;

void selection_sort(int v[], int tamanho)
{
    for(int i = 0; i< (tamanho - 1); i++)
    {
      int min = i;
      for(int j= i + 1; j < tamanho; j++)
      {
        if(v[j] < v[min])
        {
          min = j;
      } 
    }
    
    if(min != i)
    {
      int aux = v[i];
      v[i] = v[min];
      v[min] = aux;
        }
    }
}
 
int main() {
 int v[10] = {64, 25, 12, 22, 11, 90, 34, 78, 56, 43};
 int tamanho = 10;
 
 selection_sort(v, 10);
 
 
 for(int i = 0; i < 10; i++)
    cout << v[i] << endl;
    return 0;
}

