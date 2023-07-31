#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, int> hash;
    for (auto x : nums) {
        hash[x]++;
        if (hash[x] > 1) {
            return true;
        }
    }
    return false;
}

int main() {
    vector <int> input = { 1,2,3 };
    cout << containsDuplicate(input);
}