#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    vector<string> telefones;
    string numero;
    while (cin >> numero) {
        telefones.push_back(numero);
    }

    sort(telefones.begin(), telefones.end());

    int economizados = 0;
    for (size_t i = 1; i < telefones.size(); ++i) {
        int prefixo = 0;
        while (prefixo < telefones[i].size() &&
               telefones[i][prefixo] == telefones[i-1][prefixo]) {
            prefixo++;
        }
        economizados += prefixo;
    }
    cout << economizados << endl;
    return 0;
}