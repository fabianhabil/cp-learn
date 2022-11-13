#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc, max = 0, team = 0;
    cin >> tc;
    vector <int>rating(tc);
    for (int i = 0; i < tc; i++) {
        cin >> rating[i];
    }
    sort(rating.begin(), rating.end());
    for (int i = 0; i < tc; i++) {
        for (int j = i + 2; j < tc; j++) {
            int diff = abs(rating[i] - rating[j]);
            if (diff <= tc) {
                team += (j - i) - 1;
                int sum = rating[i] + rating[j] + rating[j - 1];
                if (sum > max) max = sum;
            }
        }
    }
}