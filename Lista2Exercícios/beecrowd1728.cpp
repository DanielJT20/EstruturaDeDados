#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string reverseString(string s) {
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    string eq;
    while (cin >> eq && eq != "0+0=0") {


        size_t mais = eq.find('+');
        size_t igual = eq.find('=');
        string a_str = eq.substr(0, mais);
        string b_str = eq.substr(mais + 1, igual - mais - 1);
        string c_str = eq.substr(igual + 1);

        string reversed_a_str = reverseString(a_str);
        string reversed_b_str = reverseString(b_str);
        string reversed_c_str = reverseString(c_str);

        int a = stoi(reversed_a_str);
        int b = stoi(reversed_b_str);
        int c = stoi(reversed_c_str);

        if (a + b == c) {
            cout << "True" << endl;
        } else {
            cout << "False" << endl;
        }
    }

    if (eq == "0+0=0") {
        string a_str = "0";
        string b_str = "0";
        string c_str = "0";
        
        string reversed_a_str = reverseString(a_str);
        string reversed_b_str = reverseString(b_str);
        string reversed_c_str = reverseString(c_str);
        
        int a = stoi(reversed_a_str);
        int b = stoi(reversed_b_str);
        int c = stoi(reversed_c_str);
        
        if (a + b == c) {
            cout << "True" << endl;
        } else {
            cout << "False" << endl;
        }
    }
    
    return 0;
}