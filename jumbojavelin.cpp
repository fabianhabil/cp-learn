#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int jumlah = 0;
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        if (i != 0) {
            jumlah += input;
            jumlah -= 1;
        }
        else{
            jumlah += input;
        }
    }
    cout << jumlah;
}