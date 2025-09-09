#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    while (cin >> N && N != 0) {
        string comandos;
        cin >> comandos;

        int direcao = 0;

        for (char comando : comandos) {
            if (comando == 'D') {
                direcao = (direcao + 1) %4;
            } else if (comando == 'E') {
                direcao = (direcao - 1) %4;
            }
        }

        if (direcao == 0) {
            cout << "N" << endl;
        } else if (direcao == 1) {
            cout << "L" << endl;
        } else if (direcao == 2) {
            cout << "S" << endl;
        } else if (direcao == 3){
            cout << "O" << endl;
        }
    }

    return 0;
}