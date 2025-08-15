#include <iostream>

using namespace std;
int main() {    
    int n, x, y, z, w, u, v, r;
    cin >> n;
    int original = n; // Guarda o valor original para imprimir depois

    x = n / 100;
    n = n % 100;

    y = n / 50;
    n = n % 50;

    z = n / 20;
    n = n % 20;

    w = n / 10;
    n = n % 10;

    u = n / 5;
    n = n % 5;

    v = n / 2;
    n = n % 2;

    r = n / 1;

    cout << original << endl;
    cout << x << " nota(s) de R$ 100,00" << endl;
    cout << y << " nota(s) de R$ 50,00" << endl;
    cout << z << " nota(s) de R$ 20,00" << endl;
    cout << w << " nota(s) de R$ 10,00" << endl;
    cout << u << " nota(s) de R$ 5,00" << endl;
    cout << v << " nota(s) de R$ 2,00" << endl;
    cout << r << " nota(s) de R$ 1,00" << endl;

    return 0;
}