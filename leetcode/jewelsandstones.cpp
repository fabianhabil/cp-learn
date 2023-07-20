#include <bits/stdc++.h>
using namespace std;

int numJewelsInStones(string jewels, string stones) {
    unordered_map<char, int> hashS;

    for (char s : stones) {
        hashS[s]++;
    }


    int count = 0;
    for (char j : jewels) {
        count += hashS[j];
    }

    return count;
}

int main() {
    string jewels = "aA";
    string stones = "aAAbbbbbb";
    cout << numJewelsInStones(jewels, stones);
}