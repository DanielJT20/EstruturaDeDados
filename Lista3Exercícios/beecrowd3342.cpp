#include <iostream>

using namespace std;

int main(){

    int n, b, p;

    cin >> n;

    if(n % 2 != 0){
        b = ((n*n)/2) + 1;
        p = (n*n) /2 ;
    } else{
        b = (n/2)*n;
        p = (n/2)*n;
    }
    cout << b << " casas brancas e " << p << " casas pretas" << endl;

    return 0;
}