#include <iostream>
using namespace std;

int main() {
    int N;
    while (cin >> N) {
        int left[61] = {0}, right[61] = {0};
        for (int i = 0; i < N; ++i) {
            int size;
            char side;
            cin >> size >> side;
            if (side == 'E')
                left[size - 30]++;
            else
                right[size - 30]++;
        }
        int pairs = 0;
        for (int i = 0; i <= 30; ++i) {
            pairs += min(left[i], right[i]);
        }
        cout << pairs << endl;
    }
    return 0;
}