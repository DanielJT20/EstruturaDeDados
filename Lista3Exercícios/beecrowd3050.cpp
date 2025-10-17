#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
 
    int n;
    cin >> n;

    vector<int> andares(n);
    for (int i = 0; i < n; ++i) {
        cin >> andares[i];
    }

    long long max_a = (long long)andares[0] - 0;

    long long max_dist = 0;

    for (int j = 1; j < n; ++j) {
        long long distancia = max_a + (long long)andares[j] + j;
        
        max_dist = max(max_dist, distancia);
        
        max_a = max(max_a, (long long)andares[j] - j);
    }
    
    cout << max_dist << endl;

    return 0;
}