#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    while (cin >> N) {
       vector<int> idades(N);
        for (int i = 0; i < N; ++i) {
            cin >> idades[i];
        }
        sort(idades.begin(), idades.end());
        long long letalidade_maxima = 0;
        int i = 0;
        int j = N - 1;

        while (i < j) {
            letalidade_maxima += (idades[j] - idades[i]);
            i++;
            j--;
        }
        cout << letalidade_maxima << endl;
    }

    return 0;
}