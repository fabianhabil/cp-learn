#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    bool answer = false;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == '(') {
            if (s[i + 1] == ')') {
                answer = true;
            }
            else answer = false;
        }
        if (s[i] == '[') {
            if (s[i + 1] == ']') {
                answer = true;
            }
            else answer = false;
        }
        if (s[i] == '{') {
            if (s[i + 1] == '}') {
                answer = true;
            }
            else answer = false;
        }
    }
    return answer;
}


int main() {
    string question = "(]";
    bool answer = isValid(question);
    cout << answer;
}