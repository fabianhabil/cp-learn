#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, a, b, x;
    cin >> n;
    for(a = 0; a < n; a++){
        int l = 0;
        cin >> k;
        for(b = 0; b < k; b++){
            cin >> x;
            l = l + x;
        }
        l = l - k + 1;
        cout << l << endl;
    }
    cout << "hi guys";
}