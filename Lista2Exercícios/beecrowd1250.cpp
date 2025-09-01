#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    while (N--) {
        int T;
        cin >> T;
        vector<int> altura(T);
        for (int i = 0; i < T; ++i) {
            cin >> altura[i];
        }
        string pulos;
        cin >> pulos;

        int hit = 0;
        for (int i = 0; i < T; ++i) {
            if (pulos[i] == 'S' && (altura[i] == 1 || altura[i] == 2)) {
                hit++;
            } else if (pulos[i] == 'J' && altura[i] > 2) {
                hit++;
            }
        }
        cout << hit << endl;
    }

    return 0;
}