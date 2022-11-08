#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    int data[1005] = { 0 };
    cin >> tc;
    int anomaly = 0;
    while (tc--) {
        int number;
        cin >> number;
        if (number > 0) {
            if (data[number] == 0) data[number]++;
            else anomaly++;
        }
        else {
            if (data[abs(number)] == 0) anomaly++;
            else continue;
        }
    }
    cout << anomaly << endl;
}