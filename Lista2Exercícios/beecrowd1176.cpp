#include <iostream>

using namespace std;

long long int fibonacci[61];

long long int fibo(int x) {
    if (fibonacci[x] != -1) {
        return fibonacci[x];
    }
    if (x == 0) {
        fibonacci[x] = 0;
        return 0;
    }
    if (x == 1) {
        fibonacci[x] = 1;
        return 1;
    }

    fibonacci[x] = fibo(x - 1) + fibo(x - 2);
    return fibonacci[x];
}

void inicializaVetor() {
    for (int i = 0; i < 61; i++) {
        fibonacci[i] = -1;
    }
}
int main() {
    inicializaVetor();
    int N, X;
    
    cin >> N;
    
    for (int i = 0; i < N; ++i) {

        cin >> X;
        
        cout << "Fib(" << X << ") = " << fibo(X) << endl; 
    }
    
    return 0;
}