#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr;
    double s = 0;
    for (int i = 0; i < 4; ++i) {
        int number;
        cin >> number;
        arr.push_back(number);
        s += arr[i];
    }
    s /= 2;
    sort(arr.begin(), arr.end());
    double res = 0;
    cout << *arr.begin() << " " << *arr.end() << endl;
    do {
        // cout << next_permutation(arr.begin(), arr.end()) << " ";
    } while (next_permutation(arr.begin(), arr.end()));
    // for (auto i = arr.begin(); i != arr.end(); ++i) {
    //     cout << *i << " ";
    // }
}