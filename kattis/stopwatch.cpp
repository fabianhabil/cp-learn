#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y, l = 0;
    cin >> n;
    for(x = 1; x <=n; x++){
        cin >> y;
        if(x % 2 != 0){
            y = y * -1;
        }
        l = l + y;
    }
    if(l <= 0) cout << "still running";
    else cout << l;
}