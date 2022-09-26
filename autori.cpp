#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cin >> input;
    for (int i = 0; i < input.length(); i++) {
        if (i == 0) {
            cout << input[i];
        }
        if (input[i] == 45) {
            cout << input[i + 1];
        }
    }
    cout << '\n';
}