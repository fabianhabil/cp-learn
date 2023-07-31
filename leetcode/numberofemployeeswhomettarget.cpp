#include <bits/stdc++.h>
using namespace std;


int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
    int count = 0;
    for (auto x : hours) {
        if (x >= target) {
            count++;
        }
    }
    return count;
}


int main() {
    vector <int> hours = { 5,1,4,2,2 };
    int target = 6;
    cout << numberOfEmployeesWhoMetTarget(hours, target);
}