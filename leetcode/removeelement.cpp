#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int size = nums.size();
    int answer = 0;
    int lPointer = 0;
    for (int rPointer = size - 1; rPointer >= 0; rPointer--) {
        if(lPointer == rPointer) break;
        if(nums[l])


        // if (nums[lPointer] != nums[rPointer]) {
        //     lPointer++;
        //     nums[lPointer] = nums[rPointer];
        // }
        
        cout << nums[rPointer] << " ";
    }
    return answer;
}

int main() {
    vector <int> questions = { 3,2,2,3 };
    int val = 3;
    int answer = removeElement(questions, val);
    // for (auto x : questions) {
    //     cout << x << " ";
    // }
}