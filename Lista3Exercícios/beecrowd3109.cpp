#include <iostream>

using namespace std;

int main(){

    int N, Q, E, A, B;
    int conta1 = 0, conta2 = 0;
    cin >> N >> Q;
    for( int i =0; i< Q; i++){
        cin >> E;
    if (E == 1 ){
        cin >> A >> B;
        conta1 += 1;
        if( i >= 1){
            cout << conta1 << endl;
        }
        
    } else if(E == 2){
        cin >> A;
        conta2 = 0;
        if(i < Q -1) {
            cout << conta2 << endl;
        }   else    {
                break;
        }
    } 
    
}

    return 0;
}