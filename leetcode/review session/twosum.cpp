#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    int l = 0;
    int r = n - 1;
    while (l != n && r >= 0) {
        int tempSum = nums[l] + nums[r];
        if (tempSum - target == 0 || l == r) break;
        if (tempSum > target) r--;
        else l++;
    }

    vector<int> answers;
    answers.push_back(l);
    answers.push_back(r);
    return answers;
}

int main() {
    vector<int> input = { 2,7,11,15 };
    int target = 9;
    vector<int> answers = twoSum(input, target);
    cout << answers[0] << " " << answers[1] << endl;
}