#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int input;
        int input2;
        cin >> input2;
        cin >> input;
        int jumlah = input;
        for (int j = 1; j <= input; j++) {
            jumlah += j;
        }
        cout << input2 << ' ' << jumlah << '\n';
    }
}