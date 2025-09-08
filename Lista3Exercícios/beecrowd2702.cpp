#include <iostream>

using namespace std;

int main(){
    int Ca, Ba, Pa, Cr, Br, Pr;
    int FaltaC, FaltaB, FaltaP, faltante;

    cin >> Ca >> Ba >> Pa;
    cin >> Cr >> Br >> Pr;
    if(Cr - Ca > 0){
        FaltaC = Cr - Ca;
    } else {
        FaltaC = 0;
    }
    if(Br - Ba > 0){
        FaltaB = Br - Ba;
    } else {
        FaltaB = 0;
    }
     if(Pr - Pa > 0){
        FaltaP = Pr - Pa;
    } else {
        FaltaP = 0;
    }
    faltante = (FaltaC + FaltaB + FaltaP);
    cout << faltante << endl;

    return 0;
}