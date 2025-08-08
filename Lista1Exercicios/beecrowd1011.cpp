#include <iostream>
#include <iomanip>

using namespace std;
int main(){

    int raio;
    double n = 3.14159;
    cin >> raio;
    double volume = (4.0/3.0) * n * raio * raio * raio;

    cout << fixed << setprecision(3);
    cout << "VOLUME = " << volume << endl;
    


return 0;
}