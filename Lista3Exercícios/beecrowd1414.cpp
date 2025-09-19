#include <iostream>
#include <string>

using namespace std;

int main() {

    int T; 
    int N;
    
    while (cin >> T >> N && T != 0) {
        
        int somaTotalDePontos = 0;
        
        for (int i = 0; i < T; ++i) {
            string nomeTime;
            int pontosDoTime;
            
            cin >> nomeTime >> pontosDoTime;
            
            somaTotalDePontos += pontosDoTime;
        }
        
        int numeroDeEmpates = (3 * N) - somaTotalDePontos;
        

        cout << numeroDeEmpates << endl;
    }

    return 0;
}