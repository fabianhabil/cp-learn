#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc; cin >> tc;
    while(tc--){
        set <string> city;
        int tc2; cin >> tc2;
        string x;
        while(tc2--){
            string x; cin >> x;
            city.insert(x);
        }
        cout << city.size() << "\n";
    }
    
}