#include <iostream>
#include <vector>

using namespace std;
int main() {

    int a, c; 

    while (cin >> a >> c && (a != 0 || c != 0)) {
        vector<int> alturas(c);
        for (int i = 0; i < c; ++i) {
            cin >> alturas[i];
        }
        int total_ligacoes = a - alturas[0];
        for (int i = 1; i < c; ++i) {
            if (alturas[i] < alturas[i - 1]) {
                total_ligacoes += alturas[i - 1] - alturas[i];
            }
        }
        cout << total_ligacoes << endl;
    }

    return 0;
}