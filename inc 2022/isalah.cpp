#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int document[N + 2];
    int tc;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> document[i];
    }
    cin >> tc;
    for (int i = 0; i < tc;i++) {
        int fine = 0;
        int choice;
        int change;
        cin >> choice;
        if (choice == 1) {
            cin >> change;
            document[change] = 1;
        }
        else if (choice == 2) {
            cin >> change;
            document[change] = 0;
        }
        else if (choice == 3) {
            int day0, seq;
            cin >> day0 >> seq;
            for (int i = day0; i < N; i += seq) {
                if (document[i] == 0) fine++;
            }
        }
        cout << fine << endl;
    }
}