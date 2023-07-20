#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    unordered_map <char, int> sMap;
    unordered_map <char, int> tMap;

    if (s.length() != t.length()) {
        return false;
    }

    for (int i = 0; i < s.length(); i++) {
        sMap[s[i]]++;
    }

    for (int i = 0; i < t.length(); i++) {
        tMap[t[i]]++;
    }

    for (auto i : sMap) {
        if (sMap[i.first] != tMap[i.first]) return false;
    }

    return true;
}

int main() {
    string s = "rat";
    string t = "car";
    printf("%d", isAnagram(s, t));
}