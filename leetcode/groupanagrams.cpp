#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    if (strs.size() == 1) {
        return { {strs[0]} };
    }

    vector<vector<string>> answers;
    unordered_map<string, vector<string>> hash;

    for (int i = 0; i < strs.size(); i++) {
        string original = strs[i];
        sort(strs[i].begin(), strs[i].end());
        hash[strs[i]].push_back(original);
    }

    for (auto i : hash) {
        answers.push_back(i.second);
    }

    return answers;

}

int main() {
    vector<string> input = { "eat", "tea", "tan", "ate", "nat", "bat" };
    groupAnagrams(input);
}