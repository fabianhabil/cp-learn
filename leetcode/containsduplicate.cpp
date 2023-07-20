#include <bits/stdc++.h>
using namespace std;

// this is my first submission, but sort using vector in c++ have worst complexity
// of o(log n) i was like wtf? but its true so i will write the answer using sort first.
bool containsDuplicate(vector<int>& nums) {
    unordered_map <int, int> hash;
    for (auto i : nums) {
        if (hash[i] <= 0) {
            hash[i]++;
        }
        else {
            return true;
        }
    }

    return false;
}

int main() {
    vector <int> nums = { 1,2 };
    printf("%d", containsDuplicate(nums));
}