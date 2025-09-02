#include <iostream>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int jogadores_regulares = 0;

    // Loop para cada jogador
    for (int i = 0; i < N; ++i) {
        bool fez_gol_em_todas = true;

        // Loop para cada partida
        for (int j = 0; j < M; ++j) {
            int gols;
            cin >> gols;

            if (gols == 0) {
                fez_gol_em_todas = false;
            }
        }
        
        // Se a variável booleana for true, incrementa o contador
        if (fez_gol_em_todas) {
            jogadores_regulares++;
        }
    }

    cout << jogadores_regulares << endl;

    return 0;
}