#include <bits/stdc++.h>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> answers;
    for (int i = 0; i < nums.size() / 2; i++) {
        answers.push_back(nums[i]);
        answers.push_back(nums[i + n]);
    }
    return answers;
}

int main() {
    vector<int> nums = { 2,5,1,3,4,7 };
    int n = 3;
    vector<int> ans = shuffle(nums, n);
    for (auto i : ans) {
        cout << i << endl;
    }
}