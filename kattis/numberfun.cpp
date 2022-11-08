#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int x,y,z; cin >> x >> y >> z;
        if(x+y == z || x-y == z || y-x == z || x * y == z || x / y == z  && x % y == 0|| y / x == z && y % x == 0){
            cout << "Possible" << endl;
        }
        else cout << "Impossible" << endl;
    }
}