#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> lista{3,5,-1,0,2};
    
  for(int i = 0; i < lista.size(); i++){
      int x = i;
    for(int j = i+1; j < lista.size(); j++){
       if(lista[j] < lista[x]){
           x = j;
          
       }
    }
    int t = lista[i];
    lista[i] = lista[x];
    lista[x] = t;
    
  }
  for(int i = 0; i < lista.size(); i++){
   cout << lista[i] << endl;
      
  }
    return 0;
}
