// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;
int main() {
    int v[8] = {1,23,5,10,5,-1,3,0};
    for(int i = 0; i <8; i++){
    for(int j = 0; j <7; j++){
    if(v[j] > v[j+1]){
        int aux = v[j];
        v[j] = v[j+1];
        v[j+1] = aux;
    }
    }
    for(int i=0; i<8; i++){
        cout << v[i] << endl;
    }
    }
    return 0;
}
