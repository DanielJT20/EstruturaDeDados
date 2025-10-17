#include <iostream>
#include <set>
using namespace std;

int main() {
    int A, B;
    while (cin >> A >> B, A || B) {
        set<int> alice, beatriz;
        int carta;
        for (int i = 0; i < A; ++i) {
            cin >> carta;
            alice.insert(carta);
        }
        for (int i = 0; i < B; ++i) {
            cin >> carta;
            beatriz.insert(carta);
        }
        int troca_alice = 0, troca_beatriz = 0;
        for (auto c : alice)
            if (beatriz.count(c) == 0)
                troca_alice++;
        for (auto c : beatriz)
            if (alice.count(c) == 0)
                troca_beatriz++;
        cout << min(troca_alice, troca_beatriz) << endl;
    }
    return 0;
}