#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int x = (a+ b + abs(a - b)) / 2;
    x = (x + c + abs(x - c)) / 2;

    cout << x << " eh o maior" << endl;

return 0;
}