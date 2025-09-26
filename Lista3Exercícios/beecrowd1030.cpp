#include <iostream>
using namespace std;

int lenda(int n, int m) {
    int res = 0;
    for (int i = 2; i <= n; i++)
        res = (res + m) % i;
    return res + 1;
}

int main() {
    int T;
    cin >> T;
    for (int caso = 1; caso <= T; caso++) {
        int n, m;
        cin >> n >> m;
        int vencedor = lenda(n, m);
        cout << "Case " << caso << ": " << vencedor << endl;
    }
    return 0;
}