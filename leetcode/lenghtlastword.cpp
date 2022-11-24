#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s) {
    int size = s.size();
    int count = 0;
    bool belumSpasi = false;
    for (int i = size - 1; i >= 0;i--) {
        if (s[i] != ' ') {
            belumSpasi = true;
            count++;
        };
        if (s[i] == ' ' && !belumSpasi) continue;
        if (s[i] == ' ' && belumSpasi) break;
    }
    return count;
}

int main() {
    string questions = "   fly me   to   the moon  ";
    int answer = lengthOfLastWord(questions);
    cout << answer;
}