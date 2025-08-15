#include <iostream>
using namespace std;

int main() {
    int N;
    while (cin >> N && N != 0) {
        for (int i = 0; i < N; ++i) {
            int vals[5];
            int marked = -1, count = 0;
            for (int j = 0; j < 5; ++j) {
                cin >> vals[j];
                if (vals[j] <= 127) {
                    marked = j;
                    count++;
                }
            }
            if (count == 1) {
                cout << char('A' + marked) << endl;
            } else {
                cout << "*" << endl;
            }
        }
    }
    return 0;
}