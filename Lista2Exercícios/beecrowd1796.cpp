#include <iostream>

using namespace std;

int main(){
    int Q, Y = 0, N = 0;
    cin >> Q;
  for (int i = 0; i < Q; ++i) {
      int Num;
        cin >> Num;
        if (Num == 1) {
            Y+= 1;
        } else if (Num == 0) {
            N+= 1;
        }}
    if (N > Y){
        cout << "Y" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}