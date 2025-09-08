#include <iostream>

using namespace std;

int main(){

    string palavra;
    int n;

    cin >> palavra;

    n = palavra.size();

    if( n >= 10){
        cout << "palavrao" << endl;
    } else{
        cout << "palavrinha" << endl;
    }

    return 0;
}