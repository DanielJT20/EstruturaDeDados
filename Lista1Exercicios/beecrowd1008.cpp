#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b;
    float c; 

    cin >> a >> b >> c;
    float d = c * b; 
    cout << "NUMBER = " << a  << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << d << endl;

    return 0;
}