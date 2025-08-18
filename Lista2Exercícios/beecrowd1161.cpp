#include <iostream>

using namespace std;

long long int fatorial[21]; 

long long int fat(int x) {
    if (fatorial[x] != -1) { 
        return fatorial[x];
    }

    if (x == 0) {
        fatorial[x] = 1;
        return fatorial[x];
    }
    
    fatorial[x] = x * fat(x - 1);
    return fatorial[x];
}


long long int soma(int N, int M) {
    return fat(N) + fat(M);
}

int main() {

    for (int i = 0; i < 21; i++) {
        fatorial[i] = -1;
    }

    int N, M;
    while (cin >> N >> M) { 
        long long int resultado = soma(N, M);
        cout << resultado << endl;
    }
    
    return 0;
}