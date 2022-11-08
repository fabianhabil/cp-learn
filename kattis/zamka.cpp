#include <bits/stdc++.h>
using namespace std;

int jumlahDigit(int input) {
    int jumlah = 0;
    while (input > 0) {
        jumlah = jumlah + (input % 10);
        input = input / 10;
    }
    return jumlah;
}

int main() {
    int l, d, x;
    cin >> l >> d >> x;
    for (int i = l; i <= d; i++) {
        if (jumlahDigit(i) == x) {
            cout << i << '\n';
            break;
        }
    }
    for (int j = d; j >= l; j--) {
        if (jumlahDigit(j) == x) {
            cout << j << '\n';
            break;
        }
    }
}