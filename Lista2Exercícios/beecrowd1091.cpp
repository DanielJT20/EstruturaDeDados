#include <iostream>

using namespace std;

int main() {
    int k, n, m, x, y;
    cin >> k >> n >> m;
     while (cin >> k && k != 0)
     {  cin >> n >> m;
      
    while (int i = 0; i = k; ++i){

        cin >> x >> y;
         
        if (x == n or m || y == m or n){
            cout << "divisa" << endl;}
        else if (x > n && y > m){
            cout << "NE" << endl;}
        else if (x < n && y > m){
            cout << "NO" << endl;}
        else if (x < n && y < m){
            cout << "SO" << endl;}
        else if (x > n && y < m){
            cout << "SE" << endl;
        }
            
        }
     }

    return 0;
}