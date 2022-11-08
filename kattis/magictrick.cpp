#include <bits/stdc++.h>
using namespace std;

int main() {
    int alphabet[26] = { 0 };
    string input;
    cin >> input;
    bool solve = true;
    for (int i = 0; i < input.length(); i++) {
        if (alphabet[int(input[i]) - 97] == 0) alphabet[int(input[i]) - 97]++;
        else solve = false;
    }
    if (solve) {
        cout << 1 << endl;
    }
    else cout << 0 << endl;
}