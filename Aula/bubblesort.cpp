#include <iostream>

using namespace std;

int main() {

    int v[5] = {10, 20, 30, 40, 50};
    for(int i = 0; i < v[5]; i++){
        for(int j = 0; j < v[4]; j++){
            if(v[j] > v[j +1]){
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
              
            }
        }
    }

    for(int i = 0; i< 5; i++){
        cout << v[i] << " ";
    }
    return 0;
}