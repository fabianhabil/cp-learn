#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map <int, int> hash;
    for (int i = 0; i < nums.size(); i++) {
        int sisa = target - nums[i];
        if (hash.find(sisa) == hash.end()) {
            hash[nums[i]] = i;
        }
        else {
            return { hash[sisa], i };
        }
    }
    return { -1,-1 };
}

int main() {
    vector<int> nums = { -3,4,3,90 };
    int target = 0;
    vector<int> twoSums = twoSum(nums, target);
    for (auto x : twoSums) {
        cout << x << endl;
    }
}