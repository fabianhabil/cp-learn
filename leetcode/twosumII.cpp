#include <bits/stdc++.h>
using namespace std;

vector <int> solve(vector<int>& numbers, int target) {
    int n = numbers.size();
    vector <int> answer;
    int l = 0;
    int r = n - 1;
    while (l != n && r >= 0) {
        int sumTemp = numbers[l] + numbers[r];
        cout << numbers[l] << " " << numbers[r] << endl;
        if (l == r || sumTemp == target) break;
        if (sumTemp > target) {
            r--;
        }
        else l++;
    }
    answer.push_back(l + 1);
    answer.push_back(r + 1);
    return answer;
}

int main() {
    vector <int> sample = { 2,7,11,15 };
    int target = 9;
    vector <int> answer = solve(sample, target);
    for (auto x : answer) {
        cout << x << endl;
    }
}