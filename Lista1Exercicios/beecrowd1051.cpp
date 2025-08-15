#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double salario, imposto = 0.0;
    cin >> salario;

    if (salario <= 2000.0) {
        cout << "Isento" << endl;
    } else {
        if (salario <= 3000.0) {
            imposto = (salario - 2000.0) * 0.08;
        } else if (salario <= 4500.0) {
            imposto = (1000.0 * 0.08) + ((salario - 3000.0) * 0.18);
        } else {
            imposto = (1000.0 * 0.08) + (1500.0 * 0.18) + ((salario - 4500.0) * 0.28);
        }
        cout << "R$ " << fixed << setprecision(2) << imposto << endl;
    }

    return 0;
}