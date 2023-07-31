#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> answers;
    int size = numbers.size();
    int a = 0, b = size - 1;

    while (a != b && b >= 0) {
        int targetTemp = numbers[a] + numbers[b];

        if (a == b || target == targetTemp) break;

        if (targetTemp > target) {
            b--;
        }
        else {
            a++;
        }
    }

    answers.push_back(a+1);
    answers.push_back(b+1);
    return answers;
}

int main() {
    vector <int> numbers = { 2,7,11,15 };
    int target = 9;

    vector<int> answers = twoSum(numbers, target);
    for(auto i : answers){
        cout << i << endl;
    }
}