#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int size = nums.size();
    int lPointer = 0;
    for (int rPointer = 1; rPointer < size; rPointer++) {
        if (nums[lPointer] != nums[rPointer]) {
            lPointer++;
            nums[lPointer] = nums[rPointer];
        }
    }
    return lPointer + 1;
}

int main() {
    vector <int> questions = { 1,1 };
    int answer = removeDuplicates(questions);
    for (auto x : questions) {
        cout << x << " ";
    }
}