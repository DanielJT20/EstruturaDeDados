#include <iostream>

using namespace std;

int main() {
    float O, B, I;
    cin >> O >> B >> I;
    if (O < I && O < B) {
         cout << "Otavio" << endl;
    } else if (B < O && B < I) {
         cout << "Bruno" << endl;
    } else if (O == B || O == I || B == I) {
        cout << "Empate" << endl;
    } else {
        cout << "Ian" << endl;
    }

    return 0;
}