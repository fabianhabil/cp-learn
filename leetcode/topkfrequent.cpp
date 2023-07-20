#include <bits/stdc++.h>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    vector<int> answers;
    unordered_map<int, int> hash;
    priority_queue<pair<int, int>> pq;

    for (int i = 0; i < nums.size(); i++) {
        hash[nums[i]]++;
    }
    // 1 = 2
    // 1 nya ada 2 kan

    for (auto i : hash) {
        cout << i.second << " " << i.first << endl;
        pq.push({ i.second, i.first });
    }

    for (int i = 0; i < k; i++) {
        answers.push_back(pq.top().second);
        pq.pop();
    }

    return answers;
}

int main() {
    vector<int> input = { 1,1,1,2,2,3 };
    int k = 2;
    topKFrequent(input, k);
}