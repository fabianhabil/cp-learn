#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int input;
        cin >> input;
        if (input % 2 == 0) {
            cout << input << " is even" << endl;
        }
        else {
            cout << input << " is odd" << endl;
        }
    }
}