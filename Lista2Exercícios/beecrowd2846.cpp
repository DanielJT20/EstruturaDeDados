#include <iostream>

using namespace std;

int main() {
    long long k;
    cin >> k;

    long long f1 = 1, f2 = 1;
    long long fibonot = 0;

    while (true) {
        long long fib = f1 + f2;
        long long gap = fib - f2 - 1;

        if (fibonot + gap >= k) {
            long long restante = k - fibonot;
            long long result = f2 + restante;
            cout << result << endl;
            break;
        }

        fibonot += gap;
        f1 = f2;
        f2 = fib;
    }

    return 0;
}