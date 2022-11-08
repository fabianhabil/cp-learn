#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cin >> input;
    bool hiss = false;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == 's' && input[i + 1] == 's') {
            hiss = true;
            break;
        }
    }
    if (hiss) cout << "hiss" << endl;
    else cout << "no hiss" << endl;
}