#include <bits/stdc++.h>
#define ll long long int

using namespace std;


int main() {
    ll a, b;
    cin >> a >> b;


    ll anew = 0, bnew = 0;
    while (a > 0) {
        ll digit = a % 10;
        anew = anew * 10 + digit;
        a = a / 10;
    }

    while (b > 0) {
        ll digit = b % 10;
        bnew = bnew * 10 + digit;
        b = b / 10;
    }
    if (anew > bnew) cout << anew;
    else cout << bnew;
    cout << endl;
}