#include <iostream>
#include <map>
using namespace std;

int main() {
    int N, X;
    cin >> N;
    map<int, int> freq;

    for (int i = 0; i < N; ++i) {
        cin >> X;
        freq[X]++;
    }

    for (const auto& pair : freq) {
        cout << pair.first << " aparece " << pair.second << " vez(es)" << endl;
    }

    return 0;
}