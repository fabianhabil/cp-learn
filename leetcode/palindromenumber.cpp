#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    long long int tempNumber = 0;
    long long int operation = x;
    if (x < 0 && x % 10 == 0) return false;
    else {
        while (operation > 0) {
            tempNumber = (tempNumber * 10) + (operation % 10);
            operation = operation / 10;
        }
    }
    if (tempNumber == x) { return true; }
    return false;
}

int main() {
    int input = 0;
    bool answer = isPalindrome(input);
    cout << answer;
}