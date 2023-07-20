#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    string sNew;

    for (int i = 0; i < s.length(); i++) {
        if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57)) {
            cout << s[i] << endl;
            sNew.push_back(s[i]);
        }
    }

    cout << sNew;

    for (int i = 0; i < sNew.length(); i++) {
        int j = sNew.length() - 1 - i;
        int iascii = sNew[i] >= 65 && sNew[i] <= 90 ? sNew[i] + 32 : sNew[i];
        int jascii = sNew[j] >= 65 && sNew[j] <= 90 ? sNew[j] + 32 : sNew[j];
        if (iascii != jascii) return false;
    }
    return true;
}

int main() {
    string s = "0P";
    printf("%d", isPalindrome(s));
}