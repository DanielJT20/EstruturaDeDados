#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    int tempo, velmedia;
    float litros; 
    cin >> tempo >> velmedia;
    litros = (tempo * velmedia) / 12.0;

    cout << fixed << setprecision(3) << litros << endl;
    return 0;
}