#include <iostream>

using namespace std;

int main(){
    int l, d, k, p;
    int preco, pedagio;
    cin >> l >> d >> k >> p;
    pedagio = (l/d)*p;
    preco = (l*k) + pedagio;

    cout << preco << endl;

    return o;
}