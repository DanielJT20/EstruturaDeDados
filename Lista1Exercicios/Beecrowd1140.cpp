#include <iostream>
#include <sstream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    string line;
    while (getline(cin, line)) {
        if (line == "*") break;

        istringstream iss(line);
        string word;
        char first_letter = 0;
        bool tautogram = true;

        while (iss >> word) {
            char c = tolower(word[0]);
            if (first_letter == 0) {
                first_letter = c;
            } else if (c != first_letter) {
                tautogram = false;
                break;
            }
        }

        cout << (tautogram ? 'Y' : 'N') << endl;
    }
    return 0;
}