#include <iostream>

using namespace std;
int main() {
    int A,B,C;
   
    while(cin >> A >> B && A != 0 && B != 0){
         C = 2*A - B;
        cout << C << endl;
    }
    
    return 0;
}