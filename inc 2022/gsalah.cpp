#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    long long int sum;
    cin >> tc;
    cin >> sum;
    vector <int> angkaTurn;
    vector <char> opTurn;

    for (int i = 0; i < tc;i++) {
        long long int sumTemp1 = sum;
        long long int sumTemp2 = sum;
        char op1, op2;
        int angka1, angka2;
        cin >> op1 >> angka1 >> op2 >> angka2;
        if (op1 == '+') {
            sumTemp1 += angka1;
        }
        if (op1 == 'x') {
            sumTemp1 *= angka1;
        }
        if (op2 == '+') {
            sumTemp2 += angka2;
        }
        if (op2 == 'x') {
            sumTemp2 *= angka2;
        }
        if (sumTemp1 >= sumTemp2) {
            sum = sumTemp1;
        }
        else {
            sum = sumTemp2;
        }
    }
    cout << sum << endl;
}