#include <iostream>
#include <vector>

using namespace std;

// Função para encontrar o Período de Pisano para a base m
long long pisanoPeriod(long long m) {
    long long a = 0, b = 1;
    for (long long i = 0; i < m * m; ++i) {
        long long temp = a;
        a = b;
        b = (temp + b) % m;
        if (a == 0 && b == 1) {
            return i + 1;
        }
    }
    return 0; // Should not be reached for m > 1
}

// Função para calcular fib(n) mod m
long long fibonacci_mod(long long n, long long m) {
    if (m == 1) return 0; // Edge case
    
    long long pisano_period = pisanoPeriod(m);
    long long reduced_n = n % pisano_period;

    if (reduced_n == 0) return 0;
    if (reduced_n == 1) return 1;

    long long a = 0;
    long long b = 1;
    for (long long i = 2; i <= reduced_n; ++i) {
        long long temp = a;
        a = b;
        b = (temp + b) % m;
    }
    return b;
}

int main() {
    long long n, b;
    int case_num = 1;

    while (cin >> n >> b && (n != 0 || b != 0)) {
        cout << "Case " << case_num++ << ": " << n << " " << b << " ";

        // Use a fórmula C(n) = 2 * fib(n+1) - 1
        long long fib_n_plus_1_mod_b = fibonacci_mod(n + 1, b);
        
        long long calls_mod_b = (2 * fib_n_plus_1_mod_b - 1);
        
        // Ensure the result is positive
        calls_mod_b = (calls_mod_b % b + b) % b;
        
        cout << calls_mod_b << endl;
    }

    return 0;
}