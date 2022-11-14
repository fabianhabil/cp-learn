#include <bits/stdc++.h>
using namespace std;

vector<int> buildArray(vector<int>& nums) {
    vector <int> answer;
    int i = 0;
    for (auto x : nums) {
        answer.push_back(nums[nums[i]]);
        i++;
    }
    return answer;
}


int main() {
    vector <int> questions = { 0,2,1,5,3,4 };
    vector <int> answer = buildArray(questions);
    for (auto x : answer) {
        cout << x << " ";
    }
}
