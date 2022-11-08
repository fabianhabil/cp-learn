#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, m;
    cin >> h >> m;
    if (m < 45) {
        m = m + 60;
        h = h - 1;
    }
    if (h <= 0) h = 23;
    m = m - 45;
    cout << h << " " << m;
}