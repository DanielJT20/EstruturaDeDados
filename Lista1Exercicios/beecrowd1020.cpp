#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int anos = N / 365;
    int meses = (N % 365) / 30;
    int dias = (N % 365) % 30;

    cout << anos << "ano (s)" << endl;
    cout << meses << "mes (es)" << endl;
    cout << dias << "dia (s)" << endl;
    

    return 0;
}