#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main(){
    int tc;
    double q, y, sum = 0;
    cin >> tc;
    while(tc--){
        cin >> q >> y;
        sum += q * y;

    }
    cout << fixed;
    cout << setprecision(3);
    cout << sum << endl;
}