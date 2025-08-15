#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double n;
    cin >> n;
    int valor = round(n * 100); // converte para centavos

    int nota100 = valor / 10000;
    valor %= 10000;
    int nota50 = valor / 5000;
    valor %= 5000;
    int nota20 = valor / 2000;
    valor %= 2000;
    int nota10 = valor / 1000;
    valor %= 1000;
    int nota5 = valor / 500;
    valor %= 500;
    int nota2 = valor / 200;
    valor %= 200;

    int moeda1 = valor / 100;
    valor %= 100;
    int moeda50 = valor / 50;
    valor %= 50;
    int moeda25 = valor / 25;
    valor %= 25;
    int moeda10 = valor / 10;
    valor %= 10;
    int moeda05 = valor / 5;
    valor %= 5;
    int moeda01 = valor;

    cout << "NOTAS:" << endl;
    cout << nota100 << " nota(s) de R$ 100.00" << endl;
    cout << nota50 << " nota(s) de R$ 50.00" << endl;
    cout << nota20 << " nota(s) de R$ 20.00" << endl;
    cout << nota10 << " nota(s) de R$ 10.00" << endl;
    cout << nota5 << " nota(s) de R$ 5.00" << endl;
    cout << nota2 << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << moeda1 << " moeda(s) de R$ 1.00" << endl;
    cout << moeda50 << " moeda(s) de R$ 0.50" << endl;
    cout << moeda25 << " moeda(s) de R$ 0.25" << endl;
    cout << moeda10 << " moeda(s) de R$ 0.10" << endl;
    cout << moeda05 << " moeda(s) de R$ 0.05" << endl;
    cout << moeda01 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}