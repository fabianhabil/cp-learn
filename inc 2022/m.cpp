#include <bits/stdc++.h>
using namespace std;

int getMaxValue(int a, int b) {
    if (a > b) return a;
    return b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int tc;
    cin >> tc;
    long long int obstacle[tc + 1];
    long long int tempObstacle = 1;
    long long int happinessTemp = 0;
    long long int happiness = 0;
    for (long long int i = 0; i < tc; i++) {
        long long int number;
        cin >> number;
        obstacle[i] = number;
        if (i == 0) {
            tempObstacle = number;
        }
        if (number > 0) {
            if (abs(tempObstacle - number) == 2 || abs(tempObstacle - number) == 0) {
                happinessTemp++;
            }
            else {
                happiness = getMaxValue(happiness, happinessTemp);
                if (obstacle[i - 1] == 0) {
                    happinessTemp = 2;
                }
                else {
                    happinessTemp = 1;
                }
            }

            tempObstacle = number;
        }
        else {
            happinessTemp++;
        }
    }
    if (happinessTemp > happiness) happiness = happinessTemp;
    cout << happiness << endl;
}