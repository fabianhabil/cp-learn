#include <bits/stdc++.h>
using namespace std;

int main() {
    string decode;
    string encode;
    getline(cin, decode, '\n');
    getline(cin, encode, '\n');
    string index = "";
    for (int i = 0; i < encode.length(); i++) {
        index = index + encode[i];
        if ((i + 1) % 3 == 0) {
            cout << decode[stoi(index) - 1];
            index = "";
        }
    }
    cout << endl;
}