#include <bits/stdc++.h>
using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    vector <int> answer = nums;
    for (auto x : nums) {
        answer.push_back(x);
    }
    return answer;
}


int main() {
    vector <int> questions = { 1,2,1 };
    vector <int> answer = getConcatenation(questions);
    for (auto x : answer) {
        cout << x << " ";
    }
}