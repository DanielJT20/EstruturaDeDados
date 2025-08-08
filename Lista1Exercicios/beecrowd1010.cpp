#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int c1,n1,c2,n2;
    double p1, p2;

    cin >> c1 >> n1 >> p1;
    cin >> c2 >> n2 >> p2;

    double total = (n1*p1) + (n2*p2);

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << total << endl;

    return 0;
}