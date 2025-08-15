#include <iostream>
using namespace std;

long long int fatorial[10000];
long long int fat(int x){
    if(x == 0) {
    fatorial[x] = 1;
    return fatorial[x];
    }
fatorial[x] = x * fat(x - 1);
return fatorial[x];
}
int main() {
    fat(10000);
    int M;
    cin >> M;
    while (M--)
    {
        cout << "Digite um numero: " << endl;
        int N;
        cin >> N;
        cout << fatorial[N] << endl;
    }
return 0;
}