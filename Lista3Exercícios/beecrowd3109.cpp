#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> posifunc(N + 1);
    vector<int> namesa(N + 1);

    for (int i = 1; i <= N; ++i) {
        posifunc[i] = i;
        namesa[i] = i;
    }
    for (int i = 0; i < Q; ++i) {
        int E;
        cin >> E;

        if (E == 1) { 
            int A, B;
            cin >> A >> B;

            int mesa_A = posifunc[A];
            int mesa_B = posifunc[B];

            posifunc[A] = mesa_B;
            posifunc[B] = mesa_A;

            namesa[mesa_A] = B;
            namesa[mesa_B] = A;

        } else if (E == 2) { 
            int A;
            cin >> A;

            int redirecionamentos = 0;
            int mesa_atual = A;

            while (namesa[mesa_atual] != A) {
                mesa_atual = namesa[mesa_atual];
                redirecionamentos++;
            }
            cout << redirecionamentos << endl;
        }
    }

    return 0;
}