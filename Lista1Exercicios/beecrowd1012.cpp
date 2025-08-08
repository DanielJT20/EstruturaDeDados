#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    double n = 3.14159;
    double a, b, c;
    cin >> a >> b >> c;

    double x = (a * c )/ 2;

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << x << endl;
    cout << "CIRCULO: " << n * c * c << endl;
    cout << "TRAPEZIO: " << ((a + b) * c) / 2 << endl;
    cout << "QUADRADO: " << b * b << endl;
    cout << "RETANGULO: " << a * b << endl;

return 0;
}