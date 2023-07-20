#include <bits/stdc++.h>
using namespace std;

string defangIPaddr(string address) {
    string newS;
    for (int i = 0; i < address.size(); i++) {
        if (address[i] != '.') {
            newS.push_back(address[i]);
        }
        else {
            newS.push_back('[');
            newS.push_back(address[i]);
            newS.push_back(']');
        }
    }
    return newS;
}

int main() {
    string s = "1.1.1.1";
    cout << defangIPaddr(s);
}