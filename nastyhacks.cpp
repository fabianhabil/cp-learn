#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long r, e, c;
    for(int i = 0; i < n; i++){
        cin >> r >> e >> c;
        if(e - c == r) cout << "does not matter" << endl;
        else if(e - c > r) cout << "advertise" << endl;
        else cout << "do not advertise" << endl;
    }
}