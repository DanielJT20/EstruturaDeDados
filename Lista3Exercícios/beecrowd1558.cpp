#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;

    while (cin >> n) {
        if (n < 0) {
            cout << "NO" << endl;
            continue;
        }

        bool found = false;

        for (int a = 0; a * a <= n; ++a) {
            int lembre = n - a * a;
            int b = static_cast<int>(round(sqrt(lembre)));

            if (b * b == lembre) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}