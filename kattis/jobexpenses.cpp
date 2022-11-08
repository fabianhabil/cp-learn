#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    int sum = 0;
    cin >> tc;
    while (tc--) {
        int input;
        cin >> input;
        if (input < 0) {
            sum += abs(input);
        }
    }
    cout << sum << endl;
}