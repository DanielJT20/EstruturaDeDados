#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float a,b,media;
    cin >> a >> b;
    media = a * 3.5 + b * 7.5;
    media /= 11.0;

    cout << fixed << setprecision(5);

    cout << "MEDIA = " << media << endl;

    return 0;
}