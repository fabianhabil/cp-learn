#include <bits/stdc++.h>
using namespace std;

int main() {
    int input;
    cin >> input;
    for (int i = 1; i <= input; i++) {
        string inputstring;
        cin >> inputstring;
        if (i % 2 == 1) {
            cout << inputstring << '\n';
        }
    }
}