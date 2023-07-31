#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxg = nums[0];
    int current = 0;
    for (auto x : nums) {
        if (current < 0) {
            current = 0;
        }
        current = current + x;
        maxg = max(current, maxg);
    }
    return maxg;
}

int main() {
    vector<int> input = { 5,4,-1,7,8 };
    cout << maxSubArray(input);
}