#include <iostream>

using namespace std;

int main() {
    int N;
    while (cin >> N && N != 0) {
        
        for (int i = 0; i < N; ++i) {
            
            int valores[5];
            int marcado = -1, countador = 0;
            
            for (int j = 0; j < 5; ++j) {
                cin >> valores[j];
                if (valores[j] <= 127) {
                    marcado = j;
                    countador += 1;
                }
            }
            if (countador == 1) {
                cout << char('A' + marcado) << endl;
            } else {
                cout << "*" << endl;
            }
        }
    }
    return 0;
}