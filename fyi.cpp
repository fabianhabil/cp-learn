#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cin >> input;
    bool fyi = false;
    for (int i = 0; i < 3; i++) {
        if (input[i] == '5') fyi = true;
        else {
            fyi = false;
            break;
        }
    }
    cout << fyi;
}