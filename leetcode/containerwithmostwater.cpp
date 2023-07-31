#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
    int maxarea = 0;
    int a = 0;
    int b = height.size() - 1;
    while (a < b) {
        int area = min(height[a], height[b]) * (b - a);
        maxarea = max(area, maxarea);

        if (height[a] <= height[b]) {
            a++;
        }
        else {
            b--;
        }
    }
    cout << a << " " << b << endl;
    return maxarea;
}

int main() {
    vector <int> input = { 1,8,6,2,5,4,8,3,7 };
    cout << maxArea(input);
}