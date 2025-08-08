#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string a; 
    double b, c;

    cin >> a >> b >> c;
    double total = b + (c*0.15); 
    cout << "TOTAL = " << fixed << setprecision(2) << total << endl;




    return 0;
}