#include <bits/stdc++.h>
using namespace std;

int finalValueAfterOperations(vector<string>& operations) {
    int answer = 0;
    for (int i = 0; i < operations.size(); i++) {
        if (operations[i].compare("++X") == 0 || operations[i].compare("X++") == 0) answer++;
        else answer--;
    }
    return answer;
}

int main() {
    vector<string> questions = { "++X","++X","X++" };
    int answer = finalValueAfterOperations(questions);
    cout << answer;
}