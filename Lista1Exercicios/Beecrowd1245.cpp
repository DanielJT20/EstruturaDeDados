#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int N;
    while (cin >> N) {
        map<int, pair<int, int>> boots; // {size, {left, right}}
        for (int i = 0; i < N; ++i) {
            int size;
            char side;
            cin >> size >> side;
            if (side == 'E')
                boots[size].first++;
            else
                boots[size].second++;
        }
        int pairs = 0;
        for (auto &b : boots) {
            pairs += min(b.second.first, b.second.second);
        }
        cout << pairs << endl;
    }
    return 0;
}