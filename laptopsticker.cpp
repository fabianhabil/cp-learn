#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a - c < 2) {
        cout << 0 << endl;
        return 0;
    }
    if (b - d < 2) {
        cout << 0 << endl;
        return 0;
    }
    cout << 1 << endl;
}