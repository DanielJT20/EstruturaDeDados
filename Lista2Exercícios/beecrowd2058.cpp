#include <iostream>

using namespace std;

int main() {
    int n, contador = 0;
    cin >> n;   
    if (n < 3) {
        return 0;
    }
    contador = (n - 2);
    cout << contador << endl;
    return 0;
}