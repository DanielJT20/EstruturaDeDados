#include <iostream>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int jogadores_regulares = 0;

    for (int i = 0; i < N; ++i) {
        bool fez_gols = true;

        for (int j = 0; j < M; ++j) {
            int gols;
            cin >> gols;

            if (gols == 0) {
                fez_gols = false;
            }
        }

        if (fez_gols) {
            jogadores_regulares++;
        }
    }

    cout << jogadores_regulares << endl;

    return 0;
}