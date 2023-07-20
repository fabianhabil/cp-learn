#include <bits/stdc++.h>
using namespace std;

vector <int> solve(vector<int>& numbers, int target) {
    vector <int> answers;
    int n = numbers.size();
    int l = 0;
    int r = n - 1;
    while (l != n && r >= 0) {
        int remainder = numbers[l] + numbers[r];
        if (l == r || remainder == target) break;
        if (remainder > target) {
            r--;
        }
        else {
            l++;
        }
    }

    answers.push_back(l + 1);
    answers.push_back(r + 1);
    return answers;

}

int main() {
    vector <int> sample = { 2,7,11,15 };
    int target = 9;
    vector <int> answer = solve(sample, target);
    for (auto x : answer) {
        cout << x << endl;
    }
}