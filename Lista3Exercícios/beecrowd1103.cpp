#include <iostream>
using namespace std;

int main() {
    int H1, M1, H2, M2;
    while (true) {
        cin >> H1 >> M1 >> H2 >> M2;
        if (H1 == 0 && M1 == 0 && H2 == 0 && M2 == 0)
            break;
        int minutos1 = H1 * 60 + M1;
        int minutos2 = H2 * 60 + M2;
        int resultado = minutos2 - minutos1;
        if (resultado <= 0)
            resultado += 24 * 60;
        cout << resultado << endl;
    }
    return 0;
}