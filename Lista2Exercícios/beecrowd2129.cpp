#include <iostream>

using namespace std;

int main() {
    int n, instancia = 1;
    while (cin >> n) {
        long long result = 1;
        int count2 = 0, count5 = 0;

        for (int i = 1; i <= n; i++) {
            int temp = i;
            while (temp % 2 == 0) {
                temp /= 2;
                count2++;
            }
            while (temp % 5 == 0) {
                temp /= 5;
                count5++;
            }
            result = (result * temp) % 10;
        }

        int resta2 = count2 - count5;
        for (int i = 0; i < resta2; i++) {
            result = (result * 2) % 10;
        }

        cout << "Instancia " << instancia++ << endl;
        cout << result << endl;
        cout << endl;
    }
    return 0;
}