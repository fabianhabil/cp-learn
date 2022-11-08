#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, r, i, j;
    float a = 0, max = 0, min = 0;
    cin >> n >> k;
    for (i = 0; i < k; i++){
        cin >> r;
        a = a + r;
    }
    if (n >= k){
        max = a + 3 * (n-k);
        min = a - 3 * (n-k);
    }
    cout << min / n << "  " << max / n;
}