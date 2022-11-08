#include <bits/stdc++.h>
using namespace std;

int main() {
    int winnerLine = 0;
    int winnerPoints = 0;
    for (int i = 0; i < 5; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int sum = a + b + c + d;
        if (sum > winnerPoints) {
            winnerLine = i + 1;
            winnerPoints = sum;
        }
    }
    cout << winnerLine << " " << winnerPoints << endl;
}