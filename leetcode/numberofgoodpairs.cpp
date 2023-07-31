#include <bits/stdc++.h>
using namespace std;

int numIdenticalPairs(vector<int>& nums) {
    int answers = 0;
    unordered_map<int, int> hash;
    for (auto x : nums) {
        answers += hash[x];
        hash[x]++;
    }

    return answers;
}

int main() {
    vector<int> input = { 1,2,3,1,1,3 };
    cout << numIdenticalPairs(input);
}