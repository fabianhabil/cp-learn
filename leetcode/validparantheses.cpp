#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack <char> soal;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            soal.push(s[i]);
        }
        else {
            if (soal.empty()) return false;
            else if (soal.top() != '(' && s[i] == ')') return false;
            else if (soal.top() != '[' && s[i] == ']') return false;
            else if (soal.top() != '{' && s[i] == '}') return false;
            soal.pop();
        }
    }
    return soal.empty();
}


int main() {
    string question = "({{{{}}}))";
    bool answer = isValid(question);
    cout << answer;
}