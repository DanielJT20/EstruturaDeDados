#include <iostream>
using namespace std;

int main() {
    int maxVal = -1000000, pos = 0, num;
    for (int i = 1; i <= 100; ++i) {
        cin >> num;
        if (num > maxVal) {
            maxVal = num;
            pos = i;
        }
    }
    cout << maxVal << endl << pos << endl;
    return 0;
}