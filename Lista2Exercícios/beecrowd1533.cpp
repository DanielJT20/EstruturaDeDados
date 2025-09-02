#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

int main() {
    int n;
    while (cin >> n && n != 0) {
        vector<int> killer(n);
        for (int i = 0; i < n; ++i) {
            cin >> killer[i];
        }

        vector<int> killer2 = killer;
        sort(killer2.begin(), killer2.end());

        int killernum = killer2[n - 2];

        int killerposi = -1;
        for (int i = 0; i < n; ++i) {
            if (killer[i] == killernum) {
                killerposi = i + 1; 
                break;
            }
        }

        cout << killerposi << endl;
    }

    return 0;
}