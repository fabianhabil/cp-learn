#include <bits/stdc++.h>
#define ll long long int

using namespace std;


int main() {
    string input;
    cin >> input;
    ll kiri = 0, kanan = 0;
    bool udahKanan = false;

    for (int i = 0; i < input.length(); i++) {
        if (!udahKanan) {
            if (input[i] == '(') udahKanan = true;
            else kiri++;
        }
        else {
            if (input[i] != ')') kanan++;
        }
    }
    if (kiri == kanan) cout << "correct";
    else cout << "fix";
    cout << endl;
}