#include <bits/stdc++.h>
using namespace std;

bool backspaceCompare(string s, string t) {
    string sNew;
    string tNew;

    for (auto c : s) {
        if (!sNew.empty() && c == '#') {
            sNew.pop_back();
        }
        else {
            if (c != '#') {
                sNew.push_back(c);
            }
        }
    }

    for (auto c : t) {
        if (!tNew.empty() && c == '#') {
            tNew.pop_back();
        }
        else {
            if (c != '#') {
                tNew.push_back(c);
            }
        }
    }

    return sNew == tNew;
}

int main() {
    string s = "ab#c";
    string t = "ad#c";
    cout << backspaceCompare(s, t);
}